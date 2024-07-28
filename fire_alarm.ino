#define Fire_sensor 8  
#define Buzzer 9  
#define Light 10  
#define ldelay 500  
#define bdelay 500  
void setup() 
{  
    Serial.begin(9600);  
    pinMode(Fire_sensor, INPUT);  
    pinMode(Buzzer, OUTPUT);  
    pinMode(Light, OUTPUT);  
}  
void loop()
{  
    if (int a = digitalRead(Fire_sensor) == LOW)
    {  
        alert();  
    } else {  
        digitalWrite(Buzzer, LOW);  
        digitalWrite(Light, LOW);  
    }  
}  
void alert()
{  
    digitalWrite(Light, HIGH);  
    digitalWrite(Buzzer, HIGH);  
    delay(ldelay);  
    digitalWrite(Light, LOW);  
    digitalWrite(Buzzer, LOW);  
    delay(ldelay);  
    digitalWrite(Light, HIGH);  
    digitalWrite(Buzzer, HIGH);  
    delay(ldelay);  
    digitalWrite(Light, LOW);  
    digitalWrite(Buzzer, LOW);  
    delay(ldelay);  
    digitalWrite(Light, HIGH);  
    digitalWrite(Buzzer, HIGH);  
    delay(ldelay);  
    digitalWrite(Light, LOW);  
    digitalWrite(Buzzer, LOW);  
    delay(ldelay);  
}
