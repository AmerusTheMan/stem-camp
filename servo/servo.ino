#include <Servo.h> // Inkludera servo biblioteket

/*
  Programm för att styra en servo
*/

Servo min_servo; // "skapa" servon

int servo_pin = 11;

void setup() {
  min_servo.attach(servo_pin);

  min_servo.write(0); // sätt servon till 0 grader
  delay(500); // vänta på att den hinner ta sig dit
  
  min_servo.write(45); // sätt servon till 45 grader
  delay(500); // vänta på att den hinner ta sig dit
  
  min_servo.write(90); // sätt servon till 90 grader
  delay(500); // vänta på att den hinner ta sig dit
  
  min_servo.write(135); // sätt servon till 135 grader
  delay(500); // vänta på att den hinner ta sig dit
  
  min_servo.write(180); // sätt servon till 180 grader
  delay(500); // vänta på att den hinner ta sig dit
  
}