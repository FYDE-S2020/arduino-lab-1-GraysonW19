


#define LED_PIN 2


void setup() {
  // put your setup code here, to run once:
 pinMode(LED_PIN, OUTPUT);
}

void timedBlink(int delayTime){
digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);
}

void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_PIN, HIGH);
  delay(onTime);
  digitalWrite(LED_PIN, LOW);
  delay(offTime);
}
    
void loop() {

  int dimTime = 10;
  // put your main code here, to run repeatedly:
for(int i = 0; i < 100; i++){
  dimmer(dimTime, i);
}

for(int i = 100; i>0; i--){
  dimmer(dimTime, i);
}
}
