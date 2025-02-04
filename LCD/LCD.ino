#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C ekran(0x27,16,2);

void setup() {
  ekran.init();
  ekran.backlight();
  //ekran.setCursor(0,0);
  //ekran.print("TDV Kutahya");
  //ekran.setCursor(0,1);
  //ekran.print("Erkek Ogrenci Yurdu");
}

void loop() {
  int analogDeger=analogRead(A0);
  int deger=map(analogDeger,0,1023,0,4);
  switch(deger){
    case 0:
      ekran.clear();
      ekran.setCursor(3,0);
      ekran.print("Merhabalar");
      ekran.setCursor(3,1);
      ekran.print("Arkadaslar");
      delay(500);
      break;
    case 1:
      ekran.clear();
      ekran.setCursor(3,0);
      ekran.print("Furkan");
      ekran.setCursor(3,1);
      ekran.print("Karan");
      delay(500);
      break;
    case 2:
      ekran.clear();
      ekran.setCursor(3,0);
      ekran.print("Bursa");
      ekran.setCursor(3,1);
      ekran.print("Kutahya");
      delay(500);
      break;
    case 3:
      ekran.clear();
      ekran.setCursor(3,0);
      ekran.print("Bursa");
      ekran.setCursor(3,1);
      ekran.print("Spor");
      delay(500);
      break;
  }
}

