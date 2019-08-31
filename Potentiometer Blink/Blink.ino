#define POTENTIOMETER 18
#define LED1 7


void setup() {
  pinMode(18,INPUT);
  pinMode(7,OUTPUT); 
  Serial.begin(9600);

}

void loop() {
  int voltage=analogRead(18);
  digitalWrite(7,HIGH);
  delay(voltage);
  digitalWrite(7,LOW);
  delay(voltage);
}
