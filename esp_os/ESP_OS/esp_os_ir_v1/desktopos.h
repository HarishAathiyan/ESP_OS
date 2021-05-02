#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
int spd;
int RIGHT_BUTTps2 = 1;
int LEFT_BUTTps2 = 1;
int UP_BUTTps2 = 1;
int DOWN_BUTTps2 = 1;
int xps2;
int yps2;
int draw = 0;
int xrps2 = 0;
int yrps2 = 0;
int xxps2;
int yyps2;
int x2ps2;
int y2ps2;
int selps2 = 0;
#define RXD2 16
#define TXD2 17


void desktop_os_start() {
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3D);
  display.drawBitmap(0, 0, OSlogo, 128, 64, 1);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Serial.println("Serial Txd is on pin: " + String(TX));
  Serial.println("Serial Rxd is on pin: " + String(RX));
}
void ir() {
  if ( RIGHT_BUTTps2 == 0  ) {
    xps2 = xps2 + spd;

  }
  if (LEFT_BUTTps2 == 0) {
    xps2 = xps2 - spd;


  }
  if (  UP_BUTTps2 == 0  ) {
    yps2 = yps2 - spd;

  }
  if (DOWN_BUTTps2 == 0) {
    yps2 = yps2 + spd;

  }
  if (xps2 > 108) {
    xps2 = 108;
  }
  if (yps2 > 49) {
    yps2 = 49;
  }
  if (xps2 < 0) {
    xps2 = 0;
  }
  if (yps2 < 0) {
    yps2 = 0;
  }
}
void nomovps2() {
  RIGHT_BUTTps2 = 1;
  LEFT_BUTTps2 = 1;
  UP_BUTTps2 = 1;
  DOWN_BUTTps2 = 1;
}

void run_desktop_os() {
  if (selps2 == 1) {
    x2ps2 = xps2;
    y2ps2 = yps2;
    display.drawLine(x2ps2, y2ps2, xxps2, yyps2, WHITE);
  }
  ir();
display.setCursor(0,16);
display.setTextColor(WHITE);
display.setTextSize(1);
display.println("my computer");
display.setCursor(0,39);
display.println("folders");
  display.drawBitmap(xps2, yps2, mouse, 20, 15, 1);
  display.drawBitmap(0,0,desktopic,128,64,1); 
  display.display();
  display.clearDisplay();
  if (Serial2.available() > 0)
  {
    String value = Serial2.readStringUntil('#');
    if (value.length() == 7)
    {
      String value = Serial2.readStringUntil('#');
      String angle = value.substring(0, 3);
      String strength = value.substring(3, 6);
      String button = value.substring(6, 8);
      int spdd = strength.toInt() / 10;
      spd = spdd;
      if (button.toInt() == 3) {
        selps2 = 1;
        xxps2 = xps2;
        yyps2 = yps2;
      }
      if (button.toInt() == 2) {
        selps2 = 0;

      }
      if (strength.toInt() > 0) {
        if (angle.toInt() <= 45 && angle.toInt() <= 315) {
          RIGHT_BUTTps2 = 0;
        }
        else(RIGHT_BUTTps2 = 1);

        if (angle.toInt() >= 135 && angle.toInt() <= 225 ) {
          LEFT_BUTTps2 = 0;
        }
        else(LEFT_BUTTps2 = 1);

        if (angle.toInt() <= 315 && angle.toInt() >= 225) {
          DOWN_BUTTps2 = 0;
        }
        else(DOWN_BUTTps2 = 1);
        if (angle.toInt() <= 135 && angle.toInt() >= 45 ) {
          UP_BUTTps2 = 0;
        }
        else(UP_BUTTps2 = 1);
      }
      else(nomovps2());
      Serial.println("x= ");
      Serial.println(xps2);
      Serial.println("y= ");
      Serial.println(yps2);
      Serial.flush();
      value = "";
    }
  }

}
