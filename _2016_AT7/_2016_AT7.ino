/*
From https://www.arduino.cc/en/Tutorial/Pushbutton
We connect three wires to the Arduino board. The first 
goes from one leg of the pushbutton through a pull-up 
resistor (here 2.2 KOhms) to the 5 volt supply. The 
second goes from the corresponding leg of the pushbutton 
to ground. The third connects to a digital i/o pin (here pin 7)
which reads the button's state
*/

#define PUSHBUTTON 7

void setup() {
  pinMode(PUSHBUTTON,INPUT);
  Serial.begin(9600);
  Serial.println("PUSHBUTTON");
  delay(1000);
}

void loop() {
  int button = digitalRead(PUSHBUTTON);
  if(button)Serial.println("Pressionado!");
  else Serial.println("Pressione-me!");
  
}
