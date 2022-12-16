int npin1=9;//PUSH-BUTTON LED
int npin2=4;//PUSH-BUTTON PIN
int npin3=A1;//POTINTIOMETER PIN
int npin4=0;//POTINTIOMETER LED
int readValue=0;
int leadValue=0;
void setup() {
  pinMode(npin1,OUTPUT);
  pinMode(npin2,INPUT);
  pinMode(npin3,INPUT);
  pinMode(npin4,OUTPUT);
}
void loop() {
if(digitalRead(npin2)==HIGH){
  digitalWrite(npin1,HIGH);
}
else{
  digitalWrite(npin1,LOW); 
}
readValue=analogRead(A1);
leadValue=map(readValue, 0, 1024, 0, 255);
analogWrite(npin4, leadValue);
}

