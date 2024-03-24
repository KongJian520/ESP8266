#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(D1, D2); // RX, TX
String inputString = "";

[[maybe_unused]]
void setup() {
//	EEPROM.begin(EEPROM_Size);             //开启EEPROM
	Serial.begin(115200);                   //开启串口
	Serial.println("Start");
	Serial.println("Goodnight moon!");
	mySerial.begin(115200);
	mySerial.println("Hello, world?");
}

void loop() {

	if (mySerial.available()) {
		Serial.write(mySerial.read());
	}
	if (Serial.available()) {
		mySerial.write(Serial.read());
	}
}
