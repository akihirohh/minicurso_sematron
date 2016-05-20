#define RED_LED 11
#define GREEN_LED 6
unsigned long start, prev;
int ledState = LOW;

void setup
  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  Serial.begin(9600);
  Serial.println("Acender e apagar 2 LEDs");
  delay(1000);
  start = millis();
}

void loop() {
  if(millis() - prev > 1500){
    prev = millis();
    if(ledState==LOW){
      digitalWrite(GREEN_LED,HIGH);
      digitalWrite(RED_LED,HIGH);
      Serial.print(prev - start);
      Serial.println("\t\tHIGH");
      ledState = HIGH;
    }
    else{
      digitalWrite(GREEN_LED,LOW);
      digitalWrite(RED_LED,LOW);
      Serial.print(prev - start);
      Serial.println("\t\tLOW");
      ledState = LOW;
    }
  }
  Serial.println("Still running...");  
}
