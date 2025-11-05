//#include <LiquidCrystal_I2C_AvrI2C.h>
#include <LiquidCrystal_I2C.h>
#include <DHT11.h>
LiquidCrystal_I2C lcd(0x27,16,2);


DHT11 dht11(2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();

  // DHT11 nem degerini lcd'ye yazdiriyoruz.
  lcd.setCursor(0,0);
  lcd.print("Nem Orani: %");
  lcd.setCursor(10,0);
  lcd.print((float)dht11.readHumidity(), 2);

  // DHT11 s1cakllk degerini lcd'ye yazdiriyoruz.
  lcd.setCursor(0,1);
  lcd.print("Sicaklik: ");
  lcd.setCursor(9,1);
  lcd.print((float)dht11.readTemperature(), 2);
  lcd.print("°C");
  // 1 saniye bekliyoruz. 1 saniyede bir veriler ekrana yazdirilacak.

  delay(1000);

}
