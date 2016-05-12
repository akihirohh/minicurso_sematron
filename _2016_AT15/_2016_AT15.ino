#define POT     A0
#define PWM_PIN  9
#define READ_PWM A5
#define MIN_PWM_MS 0
#define MAX_PWM_MS 2020

void setup() {
  pinMode(PWM_PIN,OUTPUT);
  pinMode(READ_PWM,INPUT);
  Serial.begin(9600);
  Serial.println("PulseIn");
  delay(1000);
}

void loop() {
  char buffer[100]={};
  //forLoopIncreasingPWM();
  int pwm = usePot2DefinePWM();
  long t = pulseIn(READ_PWM,HIGH,MAX_PWM_MS+1000);
  int pwmEstimated = map(t,MIN_PWM_MS,MAX_PWM_MS,0,255);
  sprintf(buffer,"Real: %d \t--- pulseIn[us]: %ld \t--- pwmEstimated: %d\n", pwm, t, pwmEstimated);
  Serial.print(buffer);
  delay(10);
}

void forLoopIncreasingPWM ()
{
  for (int pwm = 0; pwm< 255; pwm++)
  {
    analogWrite(PWM_PIN,pwm);
    long t = pulseIn(READ_PWM,HIGH,MAX_PWM_MS+1000);
    Serial.print(pwm);
    Serial.print("\t\t");
    Serial.println(t);
    delay(500);    
  }
}
int usePot2DefinePWM()
{
  int reading = analogRead(POT);
  int pwm = map(reading,0,1023,0,255);
  analogWrite(PWM_PIN,pwm);  
  return pwm;
}