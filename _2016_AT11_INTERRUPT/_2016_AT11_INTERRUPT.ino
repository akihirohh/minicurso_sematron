#define RED_PIN A1
#define GREEN_PIN A0
#define PUSHBUTTON 2

volatile int numberKeys = 0;
void setup() {
  pinMode(RED_PIN,OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(PUSHBUTTON),getButton,RISING);
}
int nextLed = 1;

void loop() {
  
  while(nextLed - numberKeys > 0);
  switch(numberKeys)
  {
    case 1:
      digitalWrite(RED_PIN,HIGH);
      delay(500);
      digitalWrite(RED_PIN,LOW);
      delay(500);
      nextLed++;
      break;
    case 2:
      digitalWrite(GREEN_PIN,HIGH);
      delay(500);
      digitalWrite(GREEN_PIN,LOW);
      delay(500);
      nextLed++;
      break;
  }
}

void getButton()
{
  numberKeys++;
}
