#include <LiquidCrystal.h>
String ch;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() 
{
    Serial.begin(9600);   // Initialise Serial Communication with the Serial Monitor
    lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("...PTU... ");
    lcd.setCursor(0, 1); 
    lcd.print("WELCOME");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("NO PARKING");
    lcd.setCursor(0, 1);
    lcd.print("PROJECT");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("DRIVING");
    Serial.println("*");
    Serial.println("NO PARKING PROJECT");
    Serial.println(" PEC");
    Serial.println("#");
    delay(1000);
    pinMode(7,OUTPUT);//RELAY
    pinMode(13,OUTPUT);//BUZZER    
}

void loop() 
  {
  if(Serial.available())
  {
  String ch;
  ch = Serial.readString(); 
  ch.trim();
  Serial.println(ch);
  {
        if(ch=="4500411AF8E6")//Rfid number
        {
          digitalWrite(13,HIGH);
          
          Serial.println("*");
          Serial.println("-VEHICLE NO - PY01BB4006 DETECTED IN NO PARKING ");
          delay(2000);
          Serial.println("#");
          
          delay(2000);
          
          Serial.println("*");
          Serial.println("LOCATION - https://goo.gl/maps/xFng32RTkhkekLfT6");
          delay(3000);
          Serial.println("#");
          lcd.setCursor(0, 0);
          lcd.print("!!!!WARNING!!!!");
          lcd.setCursor(0, 1);
          lcd.print("NO PARKING ZONE");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("-REMOVE VEHICLE-");
          lcd.setCursor(0, 1);
          lcd.print("...IMMEDIATELY...");
          delay(4000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("YOU HAVE 15 SEC");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("10 sec");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("5 sec");
          lcd.setCursor(0, 1);
          delay(3000);
          lcd.clear();
          lcd.print("LOCKED");
          delay(1000);
          lcd.clear();               
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);    
        } 

         //---------------------------------------------------------------------------------
        
                if(ch=="0800AC5FDC27")//Rfid number
        {
          digitalWrite(13,HIGH);
          
          Serial.println("*");
          Serial.println("-VEHICLE NO - PY01BB4006 DETECTED IN NO PARKING ");
          delay(2000);
          Serial.println("#");
          
          delay(2000);
          
          Serial.println("*");
          Serial.println("LOCATION - https://goo.gl/maps/xFng32RTkhkekLfT6");
          delay(3000);
          Serial.println("#");
          lcd.setCursor(0, 0);
          lcd.print("!!!!WARNING!!!!");
          lcd.setCursor(0, 1);
          lcd.print("NO PARKING ZONE");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("-REMOVE VEHICLE-");
          lcd.setCursor(0, 1);
          lcd.print("...IMMEDIATELY...");
          delay(4000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("YOU HAVE 15 SEC");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("10 sec");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("5 sec");
          lcd.setCursor(0, 1);
          delay(3000);
          lcd.clear();
          lcd.print("LOCKED");
          delay(1000);
          lcd.clear();               
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);   
        } 
           
   //---------------------------------------------------------------------------------
        
        
                if(ch=="550062099DA3")//Rfid number
        {
          digitalWrite(13,HIGH);
          
          Serial.println("*");
          Serial.println("-VEHICLE NO - PY01BB4006 DETECTED IN NO PARKING ");
          delay(2000);
          Serial.println("#");
          
          delay(2000);
          
          Serial.println("*");
          Serial.println("LOCATION - https://goo.gl/maps/xFng32RTkhkekLfT6");
          delay(3000);
          Serial.println("#");
          lcd.setCursor(0, 0);
          lcd.print("!!!!WARNING!!!!");
          lcd.setCursor(0, 1);
          lcd.print("NO PARKING ZONE");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("-REMOVE VEHICLE-");
          lcd.setCursor(0, 1);
          lcd.print("...IMMEDIATELY...");
          delay(4000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("YOU HAVE 15 SEC");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("10 sec");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("5 sec");
          lcd.setCursor(0, 1);
          delay(3000);
          lcd.clear();
          lcd.print("LOCKED");
          delay(1000);
          lcd.clear();               
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);    
        }
         
//-------------------------------------------------------------------------------------------------------------------------

           if(ch=="3B004DB7B372")//Rfid number
        {
          digitalWrite(13,HIGH);
          
          Serial.println("*");
          Serial.println("-VEHICLE NO - PY01BB4006 DETECTED IN NO PARKING ");
          delay(2000);
          Serial.println("#");
          
          delay(2000);
          
          Serial.println("*");
          Serial.println("LOCATION - https://goo.gl/maps/xFng32RTkhkekLfT6");
          delay(3000);
          Serial.println("#");
          lcd.setCursor(0, 0);
          lcd.print("!!!!WARNING!!!!");
          lcd.setCursor(0, 1);
          lcd.print("NO PARKING ZONE");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("-REMOVE VEHICLE-");
          lcd.setCursor(0, 1);
          lcd.print("...IMMEDIATELY...");
          delay(4000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("YOU HAVE 15 SEC");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("10 sec");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("5 sec");
          lcd.setCursor(0, 1);
          delay(3000);
          lcd.clear();
          lcd.print("LOCKED");
          delay(1000);
          lcd.clear();               
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);  
        } 

   //-----------------------------------------------------------------------------------------------

     if(ch=="3A0018FFA875")//Rfid number
        {
          digitalWrite(13,HIGH);
          
          Serial.println("*");
          Serial.println("-VEHICLE NO - PY01BB4006 DETECTED IN NO PARKING ");
          delay(2000);
          Serial.println("#");
          
          delay(2000);
          
          Serial.println("*");
          Serial.println("LOCATION - https://goo.gl/maps/xFng32RTkhkekLfT6");
          delay(3000);
          Serial.println("#");
          lcd.setCursor(0, 0);
          lcd.print("!!!!WARNING!!!!");
          lcd.setCursor(0, 1);
          lcd.print("NO PARKING ZONE");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("-REMOVE VEHICLE-");
          lcd.setCursor(0, 1);
          lcd.print("...IMMEDIATELY...");
          delay(4000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("YOU HAVE 15 SEC");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("10 sec");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("5 sec");
          lcd.setCursor(0, 1);
          delay(3000);
          lcd.clear();
          lcd.print("LOCKED");
          delay(1000);
          lcd.clear();               
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);    
        } 

         //---------------------------------------------------------------------------------


      if(ch=="3A001AE924ED")//Rfid number
        {
          digitalWrite(13,HIGH);
          
          Serial.println("*");
          Serial.println("-VEHICLE NO - PY01BB4006 DETECTED IN NO PARKING ");
          delay(2000);
          Serial.println("#");
          
          delay(2000);
          
          Serial.println("*");
          Serial.println("LOCATION - https://goo.gl/maps/xFng32RTkhkekLfT6");
          delay(3000);
          Serial.println("#");
          lcd.setCursor(0, 0);
          lcd.print("!!!!WARNING!!!!");
          lcd.setCursor(0, 1);
          lcd.print("NO PARKING ZONE");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("-REMOVE VEHICLE-");
          lcd.setCursor(0, 1);
          lcd.print("...IMMEDIATELY...");
          delay(4000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("YOU HAVE 15 SEC");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("10 sec");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("5 sec");
          lcd.setCursor(0, 1);
          delay(3000);
          lcd.clear();
          lcd.print("LOCKED");
          delay(1000);
          lcd.clear();               
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);    
        } 

         //---------------------------------------------------------------------------------


         if(ch=="3A001A6BDA91")//Rfid number
        {
          digitalWrite(13,HIGH);
          
          Serial.println("*");
          Serial.println("-VEHICLE NO - PY01BB4006 DETECTED IN NO PARKING ");
          delay(2000);
          Serial.println("#");
          
          delay(2000);
          
          Serial.println("*");
          Serial.println("LOCATION - https://goo.gl/maps/xFng32RTkhkekLfT6");
          delay(3000);
          Serial.println("#");
          lcd.setCursor(0, 0);
          lcd.print("!!!!WARNING!!!!");
          lcd.setCursor(0, 1);
          lcd.print("NO PARKING ZONE");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("-REMOVE VEHICLE-");
          lcd.setCursor(0, 1);
          lcd.print("...IMMEDIATELY...");
          delay(4000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("YOU HAVE 15 SEC");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("10 sec");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("5 sec");
          lcd.setCursor(0, 1);
          delay(3000);
          lcd.clear();
          lcd.print("LOCKED");
          delay(1000);
          lcd.clear();               
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);    
        } 

         //---------------------------------------------------------------------------------


         if(ch=="3A00196A9AD3")//Rfid number
        {
          digitalWrite(13,HIGH);
          
          Serial.println("*");
          Serial.println("-VEHICLE NO - PY01BB4006 DETECTED IN NO PARKING ");
          delay(2000);
          Serial.println("#");
          
          delay(2000);
          
          Serial.println("*");
          Serial.println("LOCATION - https://goo.gl/maps/xFng32RTkhkekLfT6");
          delay(3000);
          Serial.println("#");
          lcd.setCursor(0, 0);
          lcd.print("!!!!WARNING!!!!");
          lcd.setCursor(0, 1);
          lcd.print("NO PARKING ZONE");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("-REMOVE VEHICLE-");
          lcd.setCursor(0, 1);
          lcd.print("...IMMEDIATELY...");
          delay(4000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("YOU HAVE 15 SEC");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("10 sec");
          delay(1500);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("5 sec");
          lcd.setCursor(0, 1);
          delay(3000);
          lcd.clear();
          lcd.print("LOCKED");
          delay(1000);
          lcd.clear();               
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);    
        } 

         //---------------------------------------------------------------------------------


             
        else
        
       {
      
         lcd.setCursor(0, 0);
         lcd.print("--DRIVE SAFELY--");
         lcd.setCursor(0, 1);
         lcd.print("-WEAR SEATBELT-");
     
        }
}
}
}
