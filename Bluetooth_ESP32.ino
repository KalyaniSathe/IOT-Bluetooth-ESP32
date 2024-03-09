#include "BluetoothSerial.h"
BluetoothSerial BT;
char input;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin("BT1:Galaxy M11"); //Bluetooth device name
  Serial.println("The device started,now you can pair it with bluetooth!");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) //check the buffer;
  {
    input = Serial.read(); //read the data;
    Serial.print(input);
    BT.write(input);
  }

}
