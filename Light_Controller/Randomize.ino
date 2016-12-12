// Randomize light blinking


// ---------------  Variables  ----------------------
// Random blinking intervals for each light. 
int rand1 = 0;      // Blinking time for light 1
int rand2 = 0;      // Blinking time for light 2
int rand3 = 0;      // Blinking time for light 3
int rand4 = 0;      // Blinking time for light 4
int rand5 = 0;      // Blinking time for light 5
int rand6 = 0;      // Blinking time for light 6
int rand7 = 0;      // Blinking time for light 7
int rand8 = 0;      // Blinking time for light 8

int time1 = 0;      // Time counter for light 1
int time2 = 0;      // Time counter for light 2
int time3 = 0;      // Time counter for light 3
int time4 = 0;      // Time counter for light 4
int time5 = 0;      // Time counter for light 5
int time6 = 0;      // Time counter for light 6
int time7 = 0;      // Time counter for light 7
int time8 = 0;      // Time counter for light 8

int val1 = 0;       // Toggle value (0/1) for light 1
int val2 = 0;       // Toggle value (0/1) for light 2
int val3 = 0;       // Toggle value (0/1) for light 3
int val4 = 0;       // Toggle value (0/1) for light 4
int val5 = 0;       // Toggle value (0/1) for light 5
int val6 = 0;       // Toggle value (0/1) for light 6
int val7 = 0;       // Toggle value (0/1) for light 7
int val8 = 0;       // Toggle value (0/1) for light 8


// ----------------  Randomize loop  --------------------

void Randomize() {
  
  if (current_time - time1 > rand1) {
    // Switch on/off for light 1
    val1 = ToggleLight(R1, val1);
    
    time1 = current_time;   // Reset timer for light 1
    rand1 = random(1,20);   // Define a new blink delay (half second intervals)
    rand1 = rand1*500;      // Put delay into milliseconds
    
  }
  
  if (current_time - time2 > rand2) {
    // Switch on/off for light 2
    val2 = ToggleLight(R2, val2);
    
    time2 = current_time;   // Reset timer for light 2
    rand2 = random(1,20);   // Define a new blink delay (half second intervals)
    rand2 = rand2*500;      // Put delay into milliseconds
    
  }
  
  if (current_time - time3 > rand3) {
    // Switch on/off for light 3
    val3 = ToggleLight(R3, val3);
    
    time3 = current_time;   // Reset timer for light 3
    rand3 = random(1,20);   // Define a new blink delay (half second intervals)
    rand3 = rand3*500;      // Put delay into milliseconds
    
  }
  
  if (current_time - time4 > rand4) {
    // Switch on/off for light 4
    val4 = ToggleLight(R4, val4);
    
    time4 = current_time;   // Reset timer for light 4
    rand4 = random(1,20);   // Define a new blink delay (half second intervals)
    rand4 = rand4*500;      // Put delay into milliseconds
    
  }
  
  if (current_time - time5 > rand5) {
    // Switch on/off for light 5
    val5 = ToggleLight(R5, val5);
    
    time5 = current_time;   // Reset timer for light 5
    rand5 = random(1,20);   // Define a new blink delay (half second intervals)
    rand5 = rand5*500;      // Put delay into milliseconds
    
  }
  
  if ((current_time - time6) > rand6) {
    // Switch on/off for light 6
    val6 = ToggleLight(R6, val6);
    
    time6 = current_time;   // Reset timer for light 6
    rand6 = random(1,20);   // Define a new blink delay (half second intervals)
    rand6 = rand6*500;      // Put delay into milliseconds
    
  }
  
  if ((current_time - time7) > rand7) {
    // Switch on/off for light 7
    val7 = ToggleLight(R7, val7);
    
    time7 = current_time;   // Reset timer for light 7
    rand7 = random(1,20);   // Define a new blink delay (half second intervals)
    rand7 = rand7*500;      // Put delay into milliseconds
    
  }
  
  if ((current_time - time8) > rand8) {
    // Switch on/off for light 8
    val8 = ToggleLight(R8, val8);
    
    time8 = current_time;   // Reset timer for light 8
    rand8 = random(1,20);   // Define a new blink delay (half second intervals)
    rand8 = rand8*500;      // Put delay into milliseconds
    
  }
  
}


int ToggleLight(int RN, int toggle) {
  
  if (toggle) {
    digitalWrite(RN, LOW);    // Turn relay N on
    toggle = 0;               // Toggle the toggle
  }
  else {
    digitalWrite(RN, HIGH);  // Turn relay N off
    toggle = 1;              // Toggle the toggle
  }
  
  return toggle;
}
