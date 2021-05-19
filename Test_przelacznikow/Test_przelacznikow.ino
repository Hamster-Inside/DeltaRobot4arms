#define enPin1 43
#define dirPin1 27
#define stepPin1 35

#define enPin2 42
#define dirPin2 26
#define stepPin2 34

#define enPin3 39
#define dirPin3 23
#define stepPin3 31

#define enPin4 38
#define dirPin4 22
#define stepPin4 30


#define indsensePin1 46
#define indsensePin2 47
#define indsensePin3 50
#define indsensePin4 51

#define testPin 13

#define switch1 8
#define switch2 10
#define switch3 12




void setup() {
  
  pinMode(13, INPUT);

  pinMode(stepPin1, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(enPin1, OUTPUT);
  
  pinMode(stepPin2, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  pinMode(enPin2, OUTPUT);
  
  pinMode(stepPin3, OUTPUT);
  pinMode(dirPin3, OUTPUT);
  pinMode(enPin3, OUTPUT);
  
  pinMode(stepPin4, OUTPUT);
  pinMode(dirPin4, OUTPUT);
  pinMode(enPin4, OUTPUT);
  
  
  pinMode(indsensePin1, INPUT);
  pinMode(indsensePin2, INPUT);
  pinMode(indsensePin3, INPUT);
  pinMode(indsensePin4, INPUT);

  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  pinMode(switch3, INPUT);
 

  digitalWrite(dirPin1, HIGH);
  digitalWrite(stepPin1, LOW);
  digitalWrite(enPin1, HIGH);
  
  digitalWrite(dirPin2, HIGH);
  digitalWrite(stepPin2, LOW);
  digitalWrite(enPin2, HIGH);
  
  digitalWrite(dirPin3, HIGH);
  digitalWrite(stepPin3, LOW);
  digitalWrite(enPin3, HIGH);
  
  digitalWrite(dirPin4, HIGH);
  digitalWrite(stepPin4, LOW);
  digitalWrite(enPin4, HIGH);

  
  Serial.begin(9600);
  
}

void loop() {

int k = 7500;
int j = 80;
int h;

//int val1 = !digitalRead(switch1);
//int val2 = !digitalRead(switch2);

 if (digitalRead(switch1)== HIGH){

     Serial.println("SWITCH1 HIGH");

 }
 else {
  Serial. println("SWITCH1 LOW");
 }

 if (digitalRead(switch2)== HIGH){
      Serial.println("SWITCH2 HIGH");
}
else {
  Serial. println("SWITCH2 LOW");
}
 if (digitalRead(switch3)== HIGH){
      Serial.println("SWITCH3 HIGH");
}
else {
  Serial. println("SWITCH3 LOW");
}
delay(1000);

}
