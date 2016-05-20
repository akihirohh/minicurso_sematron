#define RED_LED 11         //pin9 -> led -> R -> 5V
#define GREEN_LED 6       //pin6 -> R -> led -> GND 
#define PUSHBUTTON 12    //pin12 -> PUSHBUTTON -> GND

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  pinMode(PUSHBUTTON, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("PUSHBUTTON + 2 LEDs");
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button;
  button = digitalRead(PUSHBUTTON);
  if(button==LOW){
    Serial.print(button);
    Serial.println("\tVermelho!");
    digitalWrite(GREEN_LED,HIGH);
    digitalWrite(RED_LED,LOW);
  }
  else{
    Serial.print(button);
    Serial.println("\tVerde!");
    digitalWrite(GREEN_LED,LOW);
    digitalWrite(RED_LED,HIGH);
  }  
}
