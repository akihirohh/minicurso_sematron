#define LED 

void setup() 
{
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  Serial.println("Acender e apagar LED");
}

void loop() {
  unsigned long start = millis();
  digitalWrite(LED,HIGH);
  Serial.print(start);
  Serial.println("\t\tHIGH");
  //delay(500-millis()+start);
  while(millis()-start<500);
  start = millis();
  digitalWrite(LED,LOW);
  Serial.print(start);
  Serial.println("\t\tLOW");
  while(millis()-start<500);
  //delay(500-millis()+start);  
}
