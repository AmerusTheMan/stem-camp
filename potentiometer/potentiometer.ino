/*
  Enkelt program för att läsa en ANALOG signal
*/

int pot_pin = A0; // Bestämm vart vi ska läsa potentiometern 

// Setup körs en gång i början
void setup(){
  pinMode(pot_pin, INPUT); // Bestäm att vi ska ta in signaler
  Serial.begin(9600); // Starta konsollen
}

// loop körs om och om igen
void loop() {
  int pot_signal = analogRead(pot_pin); // Läs den analoga signalen på pinnen "potpin"
  // Detta ger ett värde mellan 0 och 1023

  Serial.println(pot_pin); // Skriv ut signalen
  
}
