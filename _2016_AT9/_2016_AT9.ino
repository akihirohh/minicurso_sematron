#define RED_LED 9
#define GREEN_LED 6
#define PUSHBUTTON 12

void setup() {
  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  pinMode(PUSHBUTTON, INPUT);
  Serial.begin(9600);
  Serial.println("PUSHBUTTON + 2 LEDs");
  delay(1000);
}

void loop() {
  int button;
  button = digitalRead(PUSHBUTTON);
  if(button==LOW){
    Serial.print(button);
    Serial.println("\tVermelho!");
    digitalWrite(GREEN_LED,LOW);
    digitalWrite(RED_LED,LOW);
  }
  else{
    Serial.print(button);
    Serial.println("\tVerde!");
    digitalWrite(GREEN_LED,HIGH);
    digitalWrite(RED_LED,HIGH);
  }  
}
