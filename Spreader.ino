#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int gearMotor = 13;
float update0 = 0;
float update2 = 0;
float update3 = 0;

void setup() {
  myservo.attach(11);  // attaches the servo on pin 9 to the servo 
  pinMode(gearMotor, OUTPUT);
}

void loop() {
  
update0 = millis();
while (millis() - update0 < 3000){
  digitalWrite(gearMotor, HIGH);
  //std::cout << "hi";
  Serial.println("hi");
}
digitalWrite(gearMotor, LOW);
Serial.println("GOT HERE");

delay(20000); //Wait for action TOAST

update2 = millis();
while(millis() - update2 < 12000){
  digitalWrite(gearMotor, HIGH);
  Serial.println("HERE");
}
digitalWrite(gearMotor, LOW);

Serial.println("WOWO");
for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
myservo.write(90);
//delay(2000); //Wait for action Spread


update3 = millis();
while(millis() - update3 < 20000){
  digitalWrite(gearMotor, HIGH);
  Serial.println("3");
}
digitalWrite(gearMotor, LOW);

delay(10000); //Wait for action Toppings

digitalWrite(gearMotor, HIGH);
Serial.println("end");
}
