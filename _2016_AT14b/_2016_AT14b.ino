#define RED_LED 9
#define GREEN_LED 6
#define POT A0

void setup() {
  pinMode(GREEN_LED,OUTPUT);
  pinMode(RED_LED,OUTPUT);
  pinMode(POT,INPUT);
  digitalWrite(GREEN_LED,LOW);
  digitalWrite(RED_LED,HIGH);
  Serial.begin(9600);
  Serial.println("Controle de brilho de LED com potenciometro");
  delay(1000);
}

void loop() {
  int reading = analogRead(POT);
  int pwm = map(reading,0,1023,0,255);
  if((int)reading/512)
  {
    pwm = (reading-512)/2;
    analogWrite(GREEN_LED,pwm);
  }
  else
  {
    pwm = (reading%512)/2;
    analogWrite(RED_LED,pwm); 
  }
  delay(10);
  Serial.print(reading);
  Serial.print("\t\t");
  Serial.println(pwm);
}
