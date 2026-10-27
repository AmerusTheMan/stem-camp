#include <HCSR04.h>

int dist_trig_pin = 5; // Bestäm trig pinnen
int dist_echo_pin = 6; // Bestäm echo pinnen

HCSR04 dist_sensor(dist_trig_pin, dist_echo_pin); // Starta distansmätare

float distans = 0; // Skapa en variabel för att spara mätningen

// Kör en gång
void setup(){
    Serial.begin(9600); // Starta konsollen
    
}

// Kör om och om igen
void loop(){
    distans = dist_sensor.dist(); // Läs distansen
    Serial.println(distans); // skriv till konsollen
    delay(60); // Vänta lite för stabilare mätningar 
}
