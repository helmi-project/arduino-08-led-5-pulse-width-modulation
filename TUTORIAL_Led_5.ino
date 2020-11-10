/*
   TUTORIAL LED PWM PADA ARDUINO
   LED MENYALA BERDENYUT
   D4 -> Led Merah
   D5 -> Led Hijau (pin PWM)
   D6 -> Led Biru (pin PWM)
   D7 -> Led Kuning 

*/

#define pinLed 6 //led biru pada D6 yang merupakan pin PWM
int intensitas = 0;
int jumlahStep = 1;

void setup() {
  pinMode(pinLed, OUTPUT); //set menjadi output
}

void loop() {
  analogWrite(pinLed, intensitas);
  intensitas = intensitas + jumlahStep;

  if (intensitas <= 0 || intensitas >= 255) {
    jumlahStep = -jumlahStep;
  }
  delay(5);
}
