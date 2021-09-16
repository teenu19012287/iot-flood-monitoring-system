#include <SimpleDHT.h> 
int LED1= 12;
int LED2 = 10;
int buzzerPin = 7;
int pinDHT11 = 2;
SimpleDHT11 dht11(pinDHT11);
int water=A0;
int a=0;
void setup() {
  Serial.begin(9600);
  pinMode(water,OUTPUT);
  Serial.println("\n temperaturre and humidity sensor");
//Serial.print("WATER LEVEL IS:");
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int value = analogRead(A0);
  //printing humidity and tempratur
 
    int temp ,humidity;
    //Serial.println((dht11.read(&temp));
   // Serial.println("*C");
//    Serial.println((dht11.read(&humidity));
   // Serial.println("H");
    
      
    if (value<=250){ 
    Serial.println("Water level: 0mm - Empty!"); 
    tone(buzzerPin,0, 0);
        }
  /*  else if (value>480 && value<=530){ 
    Serial.println("Water level: 0mm to 5mm"); 
   }*/
    else{
      //we ned to do dsomethiong
        digitalWrite(LED1, HIGH);
        delay(1000);
          digitalWrite(LED1, LOW);
          delay(1000);
          digitalWrite(LED2, HIGH);
          delay(1000);
          digitalWrite(LED2, LOW);
          delay(1000);
          tone(buzzerPin, 1000);
          
            
    }
    Serial.println(value);
delay(1000);

}
/*

  
  delay(250);
  int temperature = 0;
  int humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
    return;
  }
  

  Serial.print((int)temperature); Serial.print(" *C, "); 
  Serial.print((int)humidity); Serial.println(" H");
  delay(1500);

  if(a<=100){
    
   Serial.print("\nWater level:Empty");
    
  }
   
  
  else if (a>100 && a<=300){
  
    Serial.print("Water level:Low");
  }

  else if (a>300 && a<=400){
   
    Serial.print("Water level:Medium");
  }
 
  else   (a>400);{
        digitalWrite(LED1, HIGH);
    Serial.print("Water level: high");
    delay(1000);
digitalWrite(LED2, LOW); 
  delay(500);
   digitalWrite(buzzerPin, HIGH);
    delay(500);
   digitalWrite(buzzerPin,LOW);
  }
  delay(1500);
}*/
