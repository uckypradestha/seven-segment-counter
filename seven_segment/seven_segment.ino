//7-Segment Display (Efficient Version)
//Display 0 - 9 and A - F

// Pin mapping segment
const int segmentPins[7] = {7, 6, 5, 11, 10, 8, 9}; 
// a  b  c  d  e  f  g

// Segment pattern for 0-F
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