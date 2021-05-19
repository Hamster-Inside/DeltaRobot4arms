void bazowanie_robota(){
if (digitalRead(switch1) == HIGH){
 bazowanie = 0;
     
      digitalWrite(dirPin1, HIGH);
      digitalWrite(dirPin2, HIGH);
      digitalWrite(dirPin3, HIGH);
      digitalWrite(dirPin4, HIGH);
      
 if(!digitalRead(indsensePin1)){}
  else {

      digitalWrite(stepPin1, HIGH);
      delayMicroseconds(l);
      digitalWrite(stepPin1, LOW);
      delayMicroseconds(l);
    }  


if(!digitalRead(indsensePin2)){}
  else {

      digitalWrite(stepPin2, HIGH);
      delayMicroseconds(l);
      digitalWrite(stepPin2, LOW);
      delayMicroseconds(l);
    }  

if(!digitalRead(indsensePin3)){}
  else {

      digitalWrite(stepPin3, HIGH);
      delayMicroseconds(l);
      digitalWrite(stepPin3, LOW);
      delayMicroseconds(l);
    }  


if(!digitalRead(indsensePin4)){}
  else {

      digitalWrite(stepPin4, HIGH);
      delayMicroseconds(l);
      digitalWrite(stepPin4, LOW);
      delayMicroseconds(l);
    }  

 
if (digitalRead(indsensePin1) == LOW && digitalRead(indsensePin2) == LOW && digitalRead(indsensePin3) == LOW && digitalRead(indsensePin4) == LOW){

bazowanie = 1;
}}}
