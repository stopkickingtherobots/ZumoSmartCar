/* Serial Loop */

char myChar ;

void setup() {
  Serial.begin(9600);   
  Serial.println("AT");
  Serial1.begin(38400);
  Serial1.println("AT");
}
void loop() {
  while (Serial1.available()) {
    myChar = Serial1.read();
    Serial.print(myChar);
  }
  while (Serial.available()) {
    myChar = Serial.read();
    Serial.print(myChar); //echo
    Serial1.print(myChar);
  }
}
