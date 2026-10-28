/*
  Skicka en "analog" signal till en pin
*/

int analog_ut_pin = 9; 
// För att en pin sak kunan skciak en anlog signal kräver det att
// Siffran har en  ~  bredvid sig.

int counter = 0;


void setup() {
  pinMode(analog_ut_pin, OUTPUT);
}

void loop() {
  analogWrite(analog_ut_pin, counter); // skriv en "analog" signal till pinnen
  counter = counter + 1 // Öka counter med 1

  if (counter > 255){
    counter = 0;
  }

}