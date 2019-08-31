#define RECEIVER 17
#define RECEIVER2 19 
#define LED 5
#define LED2 6
long zero;
long zero2;

void setup() {
  pinMode(RECEIVER, INPUT);
  pinMode(RECEIVER2, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  zero=0;
  zero2=0;
  for (int k=0;k<100;k++){
    zero+=analogRead(RECEIVER);
    zero2+=analogRead(RECEIVER2);
  }
  zero/=100;
  zero2/=100;
  Serial.begin(9600); 

}

void loop() {
  int var=analogRead(17)+zero;
  int var2=analogRead(19)+zero2;

 
  var=constrain(var,zero,1023+zero);
  var2=constrain(var2,zero2,1023+zero2);
  var=map(var,zero,1023+zero,0,255);
  var2=map(var2,zero2,1023+zero2,0,255);
  
  
  analogWrite(5,var);
  analogWrite(6,var2);
}
