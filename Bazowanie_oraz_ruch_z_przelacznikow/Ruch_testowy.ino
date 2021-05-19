void ruch_testowy(){
 if (digitalRead(switch2) == HIGH && bazowanie > 0 && digitalRead(switch1) == LOW)  {
 digitalWrite(dirPin1, !digitalRead(dirPin1));
 digitalWrite(dirPin2, !digitalRead(dirPin2));
 digitalWrite(dirPin3, !digitalRead(dirPin3));
 digitalWrite(dirPin4, !digitalRead(dirPin4));

 int k = 7500; //zakres ruchu     
for (h=0; h<k; h++){
      digitalWrite(stepPin1, HIGH);
      digitalWrite(stepPin2, HIGH);
      digitalWrite(stepPin3, HIGH);
      digitalWrite(stepPin4, HIGH);
      delayMicroseconds(j);
      digitalWrite(stepPin1, LOW);
      digitalWrite(stepPin2, LOW);
      digitalWrite(stepPin3, LOW);
      digitalWrite(stepPin4, LOW);
      delayMicroseconds(j);
    
    }  
 
k = 0;

delay(50);

}

  
}

