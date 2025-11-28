#!/usr/bin/env python3
import sys

# Binary dosyasını oku
with open(sys.argv[1], "rb") as f:
    bindata = f.read()

# Uzunluğu 4'ün katı yap (Padding)
if len(bindata) % 4 != 0:
    bindata += b'\x00' * (4 - len(bindata) % 4)

# 32-bit kelimeler halinde yazdır
for i in range(0, len(bindata), 4):
    word = bindata[i] | (bindata[i+1] << 8) | (bindata[i+2] << 16) | (bindata[i+3] << 24)
    print(f"{word:08x}")
