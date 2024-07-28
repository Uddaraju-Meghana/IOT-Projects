
int buzzer = 10;
int LED = 8;
int Y_LED = 3;
int R_LED = 4;
int Trigger_Pin = 7;
int Echo_Pin = 6;

int Distance_cm = 0;
int Distance_inches = 0;
int Echo_distance = 0;
int RainSensor = 0;
void setup() 
{
pinMode(buzzer,OUTPUT);
pinMode(LED,OUTPUT);
pinMode(Y_LED, OUTPUT);
pinMode(R_LED, OUTPUT);

pinMode(Trigger_Pin, OUTPUT);
pinMode(Echo_Pin, INPUT);

Serial.begin(9600);

}
void loop()
{
digitalWrite(Trigger_Pin, LOW);      //OFF Ultrsonic Transmitter for 2 micro seconds
delayMicroseconds(2);
digitalWrite(Trigger_Pin, HIGH);    //OFF Ultrsonic Transmitter for 10 micro seconds
delayMicroseconds(10);
digitalWrite(Trigger_Pin, LOW);    //OFF Ultrsonic Transmitter 

Echo_distance = pulseIn(Echo_Pin, HIGH);     // Read Echo Distance 

Distance_cm = 0.01723*Echo_distance;       // Find Obstacle distance in cm
Distance_inches = Distance_cm/2.54;

Serial.print("Obstacle Distance_cm:");
Serial.println(Distance_cm);
Serial.print("Obstacle Distance_inches:");
Serial.println(Distance_inches);

if(100 < Distance_cm < 300)
{
digitalWrite(Y_LED, HIGH);
digitalWrite(R_LED, LOW);
}
if(Distance_cm < 100)
{                                                                                 
digitalWrite(Y_LED, LOW);
digitalWrite(R_LED, HIGH);
}
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
