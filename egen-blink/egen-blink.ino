/*
  Enkelt program för att tända en lampa på och av
*/
int led_pin = 12;

void setup(){
  // Bestämm hur en "pin" ska agera
  // I det här fallet säger vi åt den att LED_BUILTIN ska vara en utgång.
  // Det gör att vi kan skicka ström ut ur den och tända lampan
  pinMode(led_pin, OUTPUT); 
}


// loopen kommer att upprapas hela tiden, om och om igen
void loop() {

  // Säg till arduinon att LED_BUILTIN ska skicka en hög signal (+5V)
  digitalWrite(led_pin, HIGH);

  // Vänta 1000 milli-sekunder (1 sekund)
  delay(1000);

  // Säg till arduinon att LED_BUILTIN ska skicka en låg signal (0V)
  digitalWrite(led_pin, LOW);

  // Vänta 1000 milli-sekunder (1 sekund)
  delay(1000);
}
