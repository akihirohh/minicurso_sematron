#define POT_DIGITAL A1
#define POT_ANALOGIC A0

void setup() {
  pinMode(POT_DIGITAL,INPUT);
  Serial.begin(9600);
  Serial.println("Potenciometro: leitura analogica e digital");
  delay(1000);
}

int previousReading;

void loop() {
  int reading= 0;  
  int readingDig = digitalRead(POT_DIGITAL);
  reading = analogRead(POT_ANALOGIC);
  if(abs(previousReading-reading)>2)
  {
    Serial.print(reading);
    Serial.print("\t\t");
    Serial.println(readingDig);
  }
  previousReading = reading; 
}
