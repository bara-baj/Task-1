  const int button       = 10;
  const int motorA1      = 4;  
  const int motorA2      = 5; 
  const int motorAspeed  = 3;
  const int motorB1      = 6; 
  const int motorB2      = 7; 
  const int motorBspeed  =9;
void setup() {
 
  pinMode(motorA1, OUTPUT);
  pinMode(button, INPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  pinMode(motorAspeed, OUTPUT);
  pinMode(motorBspeed, OUTPUT);
  
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
  analogWrite(motorAspeed, 255);
  analogWrite(motorBspeed, 255);
}

void loop() {
 
 
 switch (digitalRead(button)) {
  case true:
  
       digitalWrite(motorA1, LOW);
       digitalWrite(motorA2, HIGH);
       digitalWrite(motorB1, HIGH);
       digitalWrite(motorB2, LOW);
      
      break;
  case false:
       digitalWrite(motorA1, HIGH);
       digitalWrite(motorA2, LOW);
       digitalWrite(motorB1, LOW);
       digitalWrite(motorB2, HIGH);
      
      break;
} 
  
}
