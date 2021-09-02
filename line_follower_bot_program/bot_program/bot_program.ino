const int lm=3;
const int rm=2;
const int gnd=10;
const int sensor=A0;
int thresh=500;
void setup(){
  Serial.begin(9600);
  pinMode(gnd,OUTPUT);
  pinMode(lm,OUTPUT);
  pinMode(rm,OUTPUT);
  pinMode(sensor,INPUT);
}
void loop(){
  digitalWrite(gnd,0);
  int value=analogRead(sensor);
  Serial.print("Sensor Reading : ");
  Serial.print(value);
  Serial.print("Motion :");
  if(value<thresh){
    goRight();
  } else {
    goLeft();
  }
}
void goLeft(){
  Serial.println("Left");
  digitalWrite(rm,1);
  digitalWrite(lm,0);
}
void goRight(){
  Serial.println("Right");
  digitalWrite(rm,0);
  digitalWrite(lm,1);
}
void goFront(){
  Serial.println("Front");
  digitalWrite(rm,1);
  digitalWrite(lm,1);
}
void stopBot(){
  Serial.println("Stop");
  digitalWrite(lm,0);
  digitalWrite(rm,0);
}
