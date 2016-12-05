// Alternate between four lights on and off


void AlternateFour(int time_pause) {
  
  delta_T = (current_time - previous_time);

  Serial.println(delta_T);
  
  if (delta_T > time_pause)  {
    // Turn on odd numbered relays (1,3,5,7)
    OddsOn();
  }
  
  if (delta_T > 2*time_pause) {
    // Turn on even numbered relays (2,4,6,8)
    EvensOn();
    
    // prev time = current time, allows delta_T to go back to zero
    previous_time = current_time;
  }
  
}

  
void OddsOn() {
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, LOW);
  digitalWrite(R4, HIGH);
  digitalWrite(R5, LOW);
  digitalWrite(R6, HIGH);
  digitalWrite(R7, LOW);
  digitalWrite(R8, HIGH);
}

void EvensOn() {
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  digitalWrite(R3, HIGH);
  digitalWrite(R4, LOW);
  digitalWrite(R5, HIGH);
  digitalWrite(R6, LOW);
  digitalWrite(R7, HIGH);
  digitalWrite(R8, LOW);
}
    
