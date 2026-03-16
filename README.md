# Seven Segment Display with Arduino

## Overview
Project ini menunjukkan cara menggunakan **seven segment display** untuk menampilkan angka menggunakan **Arduino**.  
Seven segment merupakan salah satu komponen display paling sederhana yang terdiri dari **7 segmen LED** yang dapat dikontrol secara individual untuk membentuk angka.

Dengan mengatur kombinasi segmen yang menyala, seven segment dapat menampilkan **angka 0–9 serta karakter heksadesimal A–F**.

---

## Components
Beberapa komponen yang digunakan dalam project ini:

- Arduino Uno (atau board Arduino lainnya)
- Seven Segment Display
- Resistor
- Breadboard
- Jumper wires

---

## Wiring
Setiap segmen pada seven segment dihubungkan ke pin digital Arduino.

Contoh mapping pin yang digunakan:

| Segment | Arduino Pin |
|-------|-------------|
| a | 7 |
| b | 6 |
| c | 5 |
| d | 11 |
| e | 10 |
| f | 8 |
| g | 9 |
| dp | 4 |

Pastikan jenis seven segment yang digunakan sesuai dengan rangkaian, baik **common anode** maupun **common cathode**.

---

## How It Works
Setiap angka pada seven segment terbentuk dari **kombinasi segmen LED yang menyala**.

Program Arduino mengontrol setiap segmen menggunakan fungsi:

- `pinMode()` untuk menentukan mode pin sebagai output
- `digitalWrite()` untuk menyalakan atau mematikan segmen

Dengan mengatur pola penyalaan segmen, display dapat menampilkan angka secara berurutan dari **0 hingga F**.

---

## Implementation
Langkah-langkah menjalankan project:

1. Rangkai seven segment ke Arduino sesuai dengan wiring.
2. Upload program Arduino ke board.
3. Setelah program dijalankan, seven segment akan menampilkan angka **0–9 dan A–F secara bergantian**.

---

## Learning Objectives
Melalui project ini, beberapa konsep dasar yang dapat dipelajari antara lain:

- Dasar **wiring komponen elektronik**
- Kontrol **LED menggunakan mikrokontroler**
- Konsep **logika digital pada display**
- Pemrograman dasar menggunakan **Arduino**

---

## Conclusion
Seven segment display merupakan salah satu komponen sederhana namun sangat penting dalam dunia elektronika dan sistem embedded.  
Dengan memahami cara kerja seven segment, kita dapat mempelajari dasar **interaksi antara hardware dan software dalam sistem mikrokontroler**.

---
