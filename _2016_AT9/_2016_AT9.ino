#define POT A0

void setup() {
  Serial.begin(9600);
  Serial.println("Potenciometro: leitura analogica");
  delay(1000);
}

int previousReading;

void loop() {
  int reading= 0;  
  reading = analogRead(POT);
  if(abs(previousReading-reading)>2)
  {
    Serial.print("\t\t");
    Serial.println(reading);
  }
  previousReading = reading; 
  delay(1);
}
