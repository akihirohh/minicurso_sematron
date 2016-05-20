#define GREEN_LED 6
#define POT       A0

void setup() {
  pinMode(GREEN_LED,OUTPUT);
  Serial.begin(9600);
  Serial.println("Controle de brilho de LED com potenciometro");
  delay(1000);
}

void loop() {
  int reading = analogRead(POT);
  int pwm = map(reading,0,1023,255,0);
  analogWrite(GREEN_LED,pwm);
  delay(10);
  Serial.print(reading);
  Serial.print("\t\t");
  Serial.println(pwm);
}
