# riscv-ai-coprocessor

PicoRV32 RISC-V işlemcisine PCPI arayüzünden bağlanan, yapay zekâ işlemleri için küçük bir SIMD hızlandırıcı. Hızlandırıcı tek bir özel komutla 8 elemanlı 4 bitlik iki vektörün iç çarpımını (nokta çarpımı) bir saat çevriminde hesaplar. Konvolüsyon ve matris çarpımı (GEMM) gibi işlemlerin iç döngüsü bu komutla hızlandırılır.

Proje Verilog ile yazılmıştır ve Verilator ile simüle edilir. İşlemcide çalışan test programları C ile yazılmıştır.

## Nasıl çalışır

![Mimari](docs/mimari.png)

- **Özel komut:** RISC-V'nin `custom-0` opcode alanı (`0x0B`) kullanılır. C kodundan satır içi assembly ile çağrılır:
  ```c
  asm volatile (".insn r 0x0B, 0, 0, %0, %1, %2" : "=r"(sonuc) : "r"(agirliklar), "r"(girdiler));
  ```
- **Veri biçimi:** `rs1` ve `rs2` yazmaçlarının her biri sekiz adet 4 bitlik değer taşır. Değer tablosu: ±{0, 0,0625, 0,125, 0,25, 0,5, 0,75, 1,0, 1,5} (E2M1 benzeri FP4).
- **Donanım:** değerler sabit noktaya çevrilir (1,0 = 16), sekiz çarpım paralel yapılır ve toplanır. Sonuç `rd` yazmacına 256 ölçekli tam sayı olarak döner.
- **İşlemci:** PicoRV32, çarpma ve bölme açık (`ENABLE_MUL`, `ENABLE_DIV`), 64 KB bellek. Program `sw/firmware.hex` dosyasından belleğe yüklenir.

## Dosyalar

| Dosya | İçerik |
|---|---|
| `rtl/ai_accelerator.v` | FP4 SIMD hızlandırıcı (PCPI eş işlemcisi) |
| `rtl/picorv32.v` | PicoRV32 RISC-V çekirdeği (YosysHQ) |
| `sim/top.v` | İşlemci + hızlandırıcı + bellek üst modülü |
| `sim/sim_main.cpp` | Verilator test ortamı; çıkış portuna yazılanları konsola basar |
| `sw/firmware.c` | İşlemcide çalışan test programı |
| `sw/start.S`, `sw/sections.lds` | Başlangıç kodu ve bağlayıcı betiği |
| `sw/makehex.py` | `firmware.bin` → `firmware.hex` dönüştürücü |
| `sw/gen_model.py` | Rastgele FP4 test verisi ve Python referans sonuçları üretir (`model_data.h`) |

## Kurulum ve çalıştırma

**Gerekenler** (Linux ya da WSL önerilir):
- RISC-V GCC araç zinciri (`riscv64-unknown-elf-gcc` ya da `riscv32-unknown-elf-gcc`)
- Verilator
- Python 3 ve NumPy (`gen_model.py` için)

Ubuntu'da örnek kurulum:
```bash
sudo apt install gcc-riscv64-unknown-elf verilator python3-numpy
git clone https://github.com/SalihAlici/riscv-ai-coprocessor.git
cd riscv-ai-coprocessor
```

```bash
# 1) Yazılımı derle ve belleğe yüklenecek hex dosyasını üret
cd sw
riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib -O2 -T sections.lds start.S firmware.c -o firmware.elf
riscv64-unknown-elf-objcopy -O binary firmware.elf firmware.bin
python3 makehex.py firmware.bin > firmware.hex

# 2) Simülasyonu derle ve çalıştır
cd ../sim
verilator --cc --exe --build -Wno-fatal top.v ../rtl/picorv32.v ../rtl/ai_accelerator.v sim_main.cpp
./obj_dir/Vtop
```

Dalga biçimi kaydı için `sim_main.cpp` içindeki `trace` satırları açılabilir; çıktı `waveform.vcd` olur.

## Testler ve sonuçlar

Geliştirme sırasında şu testler yapıldı (commit geçmişinde):
- PicoRV32 simülasyonu ve assembly testi.
- **Hızlandırıcı ve yazılım karşılaştırması:** aynı iç çarpım INT4 sürümünde yazılımla 2180, hızlandırıcıyla 92 çevrimde hesaplandı (yaklaşık 23,7 kat hızlanma; çevrimler `rdcycle` ile ölçüldü).
- 128 elemanlı dizi testi.
- Matris çarpımı (GEMM) testi.

Depodaki güncel `firmware.c` bir görüntü işleme gösterimi çalıştırır: 32×32 gri tonlu görüntüde kenar tespiti yapar ve sonucu konsola ASCII olarak çizer.

## Lisans

`rtl/picorv32.v` YosysHQ'nun PicoRV32 projesine aittir (ISC lisansı).
