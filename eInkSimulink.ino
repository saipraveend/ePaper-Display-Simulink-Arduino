#include <SPI.h>
#include "epd1in54.h"
#include "epdpaint.h"
#include "imagedata.h"

bool COLORED=0;
bool UNCOLORED=1;

unsigned char image[1024];
Paint paint(image, 0, 0);
Epd epd;

//################## Enter your display text & Colour here ######################
char text[] = "123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX";
//###############################################################################

void setup()
{
  Serial.begin(9600);
  if (epd.Init(lut_full_update) != 0) {
    Serial.print("e-Paper init failed");
    return;
  }

  epd.ClearFrameMemory(0xFF);   // bit set = white, bit reset = black
  epd.ClearFrameMemory(0xFF);   // bit set = white, bit reset = black

  epd.SetFrameMemory(IMAGE_DATA);
  epd.SetFrameMemory(IMAGE_DATA);
  epd.DisplayFrame();

  delay(2000);

  int sz = sizeof(text) - 1; //Accounting the null character

  displayTxt(text,sz);
}

void loop() {}

void displayTxt(char *txt,int strSize)
{
  epd.ClearFrameMemory(0xFF);   // bit set = white, bit reset = black
  epd.DisplayFrame();
  epd.ClearFrameMemory(0xFF);   // bit set = white, bit reset = black
  epd.DisplayFrame();

  paint.SetRotate(ROTATE_0);
  paint.SetWidth(200); // 200
  paint.SetHeight(24); //24

  //int strSize = sizeof(txt) - 1; //Accounting the null character
  if (strSize > 120) Serial.println("Screen limit with this font is 120 Char, You have exceeded the limit. Displaying limited text");
  Serial.print("Size of String is: ");
  Serial.println(strSize);
  int loopCount = 0;
  loopCount = ceil(strSize / 12);
  if (strSize <= 12) loopCount = 0;
  Serial.print("loop Count is: ");
  Serial.println(loopCount);

  for (int j = 0; j <= loopCount; j++)
  {
    char dispTxt[] = "            ";
    int x = 0;
    for (int h = j * 12; h < 12 * (j + 1); h++)
    {
      if (h < strSize) dispTxt[x] = txt[h];
      x++;
    }
    Serial.print("Disp String is: ");
    Serial.println(dispTxt);
    paint.Clear(UNCOLORED);
    paint.DrawStringAt(0, 0, dispTxt, &Font24, COLORED);
    epd.SetFrameMemory(paint.GetImage(), 0, 20 * j, paint.GetWidth(), paint.GetHeight());
  }
  epd.DisplayFrame();
}

