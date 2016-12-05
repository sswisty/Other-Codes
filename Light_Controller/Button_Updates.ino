// Check button pins for presses

void CheckButtonUpdates() {
  
  // Read Voltages on all buttons
  V0 = analogRead(b0);
  V1 = analogRead(b1);
  V2 = analogRead(B2);
  V3 = analogRead(B3);
  V4 = analogRead(B4);
  V5 = analogRead(B5);
  
  //Serial.print("Voltage Reading on A0: ");
  //Serial.println(V0); // look at voltage reading for button 1
  
  // Determine if button is pressed
  CheckVoltages();
  
  //Serial.print("Value of Z0: ");
  //Serial.println(Z0);
}


void CheckVoltages(){//int pin, int keep, int bad1, int bad2, int bad3, int bad4, int bad5) {
  // agalogRead outputs value from 0-1023 (0-5V)
  // Quarter second delay to account for multiple presses
  
  // Button 0
  if (V0 > 500) {
    Serial.println("Button 0 tripped");
    Z0 = 1;
    Z1 = 0;
    Z2 = 0;
    Z3 = 0;
    Z4 = 0;
    Z5 = 0;
    delay(250);
  }
  
  // Button 1
  if (V1 > 500) {
    Serial.println("Button 1 tripped");
    Z1 = 1;
    Z0 = 0;
    Z2 = 0;
    Z3 = 0;
    Z4 = 0;
    Z5 = 0;
    delay(250);
  }
  
  // Button 2
  if (V2 > 500) {
    Serial.println("Button 2 tripped");
    Z2 = 1;
    Z1 = 0;
    Z0 = 0;
    Z3 = 0;
    Z4 = 0;
    Z5 = 0;
    delay(250);
  }
  
  // Button 3
  if (V3 > 500) {
    Serial.println("Button 3 tripped");
    Z3 = 1;
    Z1 = 0;
    Z2 = 0;
    Z0 = 0;
    Z4 = 0;
    Z5 = 0;
    delay(250);
  }
  
  /* Pin A4 seems to be tied to A0 ... closing button for now
  // Button 4
  if (V0 > 500) {
    Serial.println("Button 4 tripped");
    Z4 = 1;
    Z1 = 0;
    Z2 = 0;
    Z3 = 0;
    Z0 = 0;
    Z5 = 0;
    delay(250);
  }
  */
  
  // Button 5
  if (V5 > 500) {
    Serial.println("Button 5 tripped");
    Z5 = 1;
    Z1 = 0;
    Z2 = 0;
    Z3 = 0;
    Z4 = 0;
    Z0 = 0;
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
  
  
