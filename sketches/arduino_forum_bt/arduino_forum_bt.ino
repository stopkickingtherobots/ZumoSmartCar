#include <SoftwareSerial.h>
SoftwareSerial EEBlue(19, 20); // RX | TX
char data = 0;            //Variable for storing received data
 
void setup()
{
  //pinMode(13, OUTPUT);
  //pinMode(11, OUTPUT);  //Sets digital pin 11 as output pin
  Serial.begin(9600);
  EEBlue.begin(9600);  //Baud Rate for command Mode. 
  Serial.println("Enter AT commands!");
}
 
void loop()
{

  // Feed any data from bluetooth to Terminal.
  if (EEBlue.available()){
    data = EEBlue.read();        //Read the incoming data & store into data
      Serial.println(data);          //Print Value inside data in Serial monitor

      //if(data == '1')digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
      //if(data == '0')digitalWrite(13, LOW);   //If value is 1 then LED turns ON

// Checks whether value of data is equal to 1
 }
// 
  // Feed all data from termial to bluetooth
  if (Serial.available())
      EEBlue.write(Serial.read());
   }
