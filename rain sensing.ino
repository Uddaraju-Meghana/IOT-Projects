
int buzzer = 10;
int LED = 8;
int RainSensor=0;

void setup()
{
  pinMode(buzzer,OUTPUT);
  pinMode(LED,OUTPUT);
Serial.begin(9600);
 
}

void loop() 
{
 int SensorValue = analogRead(RainSensor);
if(SensorValue >=100)

{
   
digitalWrite(buzzer,HIGH);
digitalWrite(LED,HIGH);
Serial.println("RAINING");
delay(1000); 
}
 
else
{
      digitalWrite(buzzer,LOW);
digitalWrite(LED,LOW);
Serial.println("NOT RAINING"); 
delay(1000);
}
 

}
