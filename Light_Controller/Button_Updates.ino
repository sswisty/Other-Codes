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
  Z0, Z1, Z2, Z3, Z4, Z5 = CheckVoltage(V0, Z0, Z1, Z2, Z3, Z4, Z5);
  Z1, Z0, Z2, Z3, Z4, Z5 = CheckVoltage(V1, Z1, Z0, Z2, Z3, Z4, Z5);
  Z2, Z1, Z0, Z3, Z4, Z5 = CheckVoltage(V2, Z2, Z1, Z0, Z3, Z4, Z5);
  Z3, Z1, Z2, Z0, Z4, Z5 = CheckVoltage(V3, Z3, Z1, Z2, Z0, Z4, Z5);
  Z4, Z1, Z2, Z3, Z0, Z5 = CheckVoltage(V4, Z4, Z1, Z2, Z3, Z0, Z5);
  Z5, Z1, Z2, Z3, Z4, Z0 = CheckVoltage(V5, Z5, Z1, Z2, Z3, Z4, Z0);
  
}


int CheckVoltage(int pin, int keep, int bad1, int bad2, int bad3, int bad4, int bad5) {
  
  if (pin > 4){
    keep = 1;
    bad1 = 0;
    bad2 = 0;
    bad3 = 0;
    bad4 = 0;
    bad5 = 0;
    
    return keep, bad1, bad2, bad3, bad4, bad5;
    
    // Wait .25sec to eliminate multiple presses
    delay(250);
  }
  
}


// scrapped this as wanted other toggle values to turn off when other is turned on...
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
  
  
