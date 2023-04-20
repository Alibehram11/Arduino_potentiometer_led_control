#define led 2
#define pot A0
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7

void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

  Serial.begin(9600);
 }

void loop() {
 int b=analogRead(pot);
  if (b == 0);
  if(b == 0){
 digitalWrite(led,HIGH);
  }
 if(b>200){
 digitalWrite(led2,HIGH);
  }
  if(b>400){
 digitalWrite(led3,HIGH);
  }
  if(b>600){
 digitalWrite(led4,HIGH);
  }
  if(b>800){
 digitalWrite(led5,HIGH);
  }
  if(b>1000){
 digitalWrite(led6,HIGH);
    
  }
 
  if(b<200){
 digitalWrite(led2,LOW);
  }
  if(b<400){
 digitalWrite(led3,LOW);
  }
  if(b<600){
 digitalWrite(led4,LOW);
  }
  if(b<800){
 digitalWrite(led5,LOW);
  }
  if(b<1000){
 digitalWrite(led6,LOW);
  }
 
 

}
 