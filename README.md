# iot flood monitoring system
 this project is based on iot .it helps us in natural desaster of the flood ..it will give us alert when the water level is high
   /*code*/
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