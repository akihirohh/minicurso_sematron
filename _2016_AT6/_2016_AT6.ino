#define RED_LED 11
#define GREEN_LED 6
unsigned long start, prev;
int ledState = LOW;

void setup() {
  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  Serial.begin(9600);
  Serial.println("Acender e apagar 2 LEDs");
  delay(1000);
  start = millis();
}

void loop() {
  for(int i=0; i<256;i+=10){
    analogWrite(GREEN_LED,i);
    analogWrite(RED_LED,255-i);
    Serial.println(i);
    delay(50);
  }
  for(int i=255; i>0;i-=10){
    analogWrite(GREEN_LED,255-i);
    analogWrite(RED_LED,i);
    Serial.println(i);
    delay(50);
  }  
}
