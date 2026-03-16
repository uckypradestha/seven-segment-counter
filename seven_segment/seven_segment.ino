/*
  Seven Segment Display Control

  Program ini digunakan untuk mengontrol sebuah seven segment display
  menggunakan Arduino untuk menampilkan angka dan karakter heksadesimal
  secara berurutan.

  Prinsip kerja sistem:
  - Setiap segmen pada seven segment (a, b, c, d, e, f, g) dihubungkan
    ke pin digital Arduino.
  - Arduino mengontrol penyalaan setiap segmen menggunakan fungsi
    digitalWrite() sehingga kombinasi segmen tertentu dapat membentuk
    angka atau karakter.
  - Waktu tampilan setiap angka diatur menggunakan fungsi delay().
  - Sistem berjalan secara berulang di dalam fungsi loop().

  Catatan:
  - Setiap segmen LED sebaiknya menggunakan resistor untuk membatasi arus
    agar komponen tidak rusak.
  - Jenis seven segment yang digunakan (common anode atau common cathode)
    akan mempengaruhi logika HIGH dan LOW pada program.
  - Pola penyalaan segmen menentukan bentuk angka yang ditampilkan.

  Program ini dibuat sebagai latihan penggunaan output digital
  serta pengendalian tampilan LED pada sistem mikrokontroler Arduino.

  Dibuat oleh Ucky Pradestha
  Tahun 2026
  Direvisi oleh -
  Tahun -
*/

//7-Segment Display
//Display 0 - 9 dan A - F

// Pin mapping segment
const int segmentPins[7] = {7, 6, 5, 11, 10, 8, 9}; 
// a  b  c  d  e  f  g

// Pola segmen 0-F
// urutan segmen: a b c d e f g
byte digitPattern[16][7] = {

  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}, //9
  {1,1,1,0,1,1,1}, //A
  {0,0,1,1,1,1,1}, //b
  {1,0,0,1,1,1,0}, //C
  {0,1,1,1,1,0,1}, //d
  {1,0,0,1,1,1,1}, //E
  {1,0,0,0,1,1,1}  //F
};

void setup()
{
  for(int i=0;i<7;i++)
  {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop()
{
  for(int i=0;i<16;i++)   //0 sampai F
  {
    displayDigit(i);
    delay(1000);
  }
}

// Fungsi menampilkan digit
void displayDigit(int num)
{
  for(int i=0;i<7;i++)
  {
    digitalWrite(segmentPins[i], digitPattern[num][i]);
  }
}
