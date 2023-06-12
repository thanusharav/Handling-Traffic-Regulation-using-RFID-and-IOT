/* ####################################################### */
//**********************************************************
// BLUETOOTH CONTROLLED ROBOT
// www.spectrumultra.com / 
//**********************************************************

 
#include <SoftwareSerial.h> //Serial Communicaton at IDE Code Library

SoftwareSerial mySerial(0, 1); //Set serial communication digital pin 2 for RX & digital pin 3 for TX
 
int channel1 = 6; 
int channel2 = 7; 
int channel3 = 8; 
int channel4 = 9; 
int channel5 = 13; 

 
 void setup()
 
 {
 mySerial.begin(9600);  //Start Serial Communication at Baud rate 9600 
 pinMode(channel1, OUTPUT); //Arduino Digital Pin 4 for Relay Channel 1
 pinMode(channel2, OUTPUT); //Arduino Digital Pin 5 for Relay Channel 2
 pinMode(channel3, OUTPUT); //Arduino Digital Pin 6 for Relay Channel 3
 pinMode(channel4, OUTPUT); //Arduino Digital Pin 7 for Relay Channel 4
 pinMode(channel5, OUTPUT); //Arduino Digital Pin 7 for Relay Channel 4
 // Relay 

  Serial.println("-*ROBOT STATUS*-");
 }
 void loop() 
 
{

  char Char_string = mySerial.read();

 
 //FORWARD
 if(Char_string == 'A') //MCU reads char string = A set relay channel 1 turn to LOW
{

 Serial.println("-SYSTEM FORWARD-");
 digitalWrite(channel1 ,LOW); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel4,LOW); //Relay channel 1 turn LOW 
 delay(50);
 digitalWrite(channel2,HIGH); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel3,HIGH); //Relay channel 1 turn LOW

}
 if(Char_string == 'B') //MCU reads char string = A set relay channel 1 turn to LOW
{

 Serial.println("-SYSTEM REVERSE-");
 digitalWrite(channel2,LOW); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel3,LOW); //Relay channel 1 turn LOW 
 delay(50);
 digitalWrite(channel1,HIGH); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel4,HIGH); //Relay channel 1 turn LOW

}
if(Char_string == 'C') //MCU reads Char String = B set relay channel 1 turn to HIGH
{

 Serial.println("--SYSTEM LEFT--");
 digitalWrite(channel2,LOW); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel4,LOW); //Relay channel 1 turn LOW 
 delay(50);
 digitalWrite(channel1,HIGH); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel3,HIGH); //Relay channel 1 turn LOW
}

// RELAY CHANNEL 2
 if(Char_string == 'D') //MCU read char string = C set relay channel 2 turn to LOW
{

 Serial.println("--SYSTEM RIGHT--");
 digitalWrite(channel1,LOW); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel3,LOW); //Relay channel 1 turn LOW 
 delay(50);
 digitalWrite(channel2,HIGH); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel4,HIGH); //Relay channel 1 turn LOW

}
if(Char_string == 'E') //MCU read char string = D set relay channel 2 turn to HIGH
{

 Serial.println("--SYSTEM STOP----");
 digitalWrite(channel1,LOW); //Relay channel 1 turn LOW
 delay(50);                                             
 digitalWrite(channel2,LOW); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel3,LOW); //Relay channel 1 turn LOW
 delay(50);
 digitalWrite(channel4,LOW); //Relay channel 1 turn LOW
}

}
