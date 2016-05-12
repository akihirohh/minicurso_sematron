#define LED 13
unsigned long start, prev;
int ledState = LOW;

void setup() 
{
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  Serial.println("Acender e apagar LED");
  delay(1000);
  start = millis();
}

void loop() 
{
  if(millis() - prev > 500){
    prev = millis();
    if(ledState==LOW){
      digitalWrite(LED,HIGH);
      Serial.print(prev - start);
      Serial.println("\t\tHIGH");
      ledState = HIGH;
    }
    else{
      digitalWrite(LED,LOW);
      Serial.print(prev - start);
      Serial.println("\t\tLOW");
      ledState = LOW;
    }
  }
  Serial.println("Still running...");  
}
