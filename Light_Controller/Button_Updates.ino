// Check button pins for presses

void CheckButtonUpdates() {
  
  // Read Voltages on all buttons
  V0 = analogRead(b0);
  V1 = analogRead(b1);
  V2 = analogRead(B2);
  V3 = analogRead(B3);
  V4 = analogRead(B4);
  V5 = analogRead(B5);
  
  // Determine if button is pressed
  CheckVoltage(V0);
  CheckVoltage(V1);
  CheckVoltage(V2);
  CheckVoltage(V3);
  CheckVoltage(V4);
  CheckVoltage(V5);
  
}


void CheckVoltage(int pin) {
  
  if (pin > 4){
    Z0 = ToggleValue(Z0);
    // Wait .25sec to eliminate multiple presses
    delay(250);
  }
  
}


int ToggleValue(int val) {
  if (val == 1){
    val = 0;
    return val;
  }
  else {
    val = 1;
    return val;
  }
}
  
  
