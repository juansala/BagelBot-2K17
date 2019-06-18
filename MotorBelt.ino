int gearMotor = 13;
float update0 = 0;
float update2 = 0;
float update3 = 0;


void setup() {
  // put your setup code here, to run once:
pinMode(gearMotor, OUTPUT);

//digitalWrite(gearMotor, LOW);

}


void loop() {
  // For each iteration of the ENTIRE MACHINE LOOP (could invert HIGH and LOW)
//digitalWrite(gearMotor, HIGH);
//digitalWrite(32, HIGH);
//Serial.println("test");
//delay(500);

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
delay(10000); //Wait for action Spread

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
