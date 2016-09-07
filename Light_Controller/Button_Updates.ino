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
  
  
