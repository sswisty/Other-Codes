/* Light Controller
This code controls varioius strings of light by using an 8 chanel realy.
The lights turn on and off in various patters that can be changed.
The code has support for 6 buttons that turn the lights:
1) All on
2) All off
3) White Lights
4) Colored Lights
5) Alternate White and Colored Lights
6) Random
Of course these can be changed in the code.

Shawn Swist 2016
Use for Mills Hall Suite 561
*/


// --------------------- CONSTANT VARIABLES ------------------------
// Button Pin Locations (some are lowercase as B0, B1 are binary numbers)
const int b0 = 0;        // Button 0 Reads to Analog Pin 0 
const int b1 = 1;        // Button 1 Reads to Analog Pin 1
const int B2 = 2;        // Button 2 Reads to Analog Pin 2
const int B3 = 3;        // Button 3 Reads to Analog Pin 3
const int B4 = 4;        // Button 4 Reads to Analog Pin 4
const int B5 = 5;        // Button 5 Reads to Analog Pin 5

// Relay Pin Locations (count down for wiring ease)
const int R1 = 12;       // Relay 1 Input on Digital Pin 12
const int R2 = 11;       // Relay 1 Input on Digital Pin 11
const int R3 = 10;       // Relay 1 Input on Digital Pin 10
const int R4 = 9;        // Relay 1 Input on Digital Pin 9
const int R5 = 8;        // Relay 1 Input on Digital Pin 8
const int R6 = 7;        // Relay 1 Input on Digital Pin 7
const int R7 = 6;        // Relay 1 Input on Digital Pin 6
const int R8 = 5;        // Relay 1 Input on Digital Pin 5

// Other Constants
const int StatLED = 13;  // Status LED on Digital Pin 13
  // should I make this an RGB LED and then change the color??
  


// --------------------- DYNAMIC VARIABLES ------------------------
// Used for timing purposes
int current_time = 0;    // Reads the current time from millis()
int previoius_time = 0;  // The previous stored time
int delta_T = 0;         // The difference between current and previous times

// Used for button presses
int V0 = 0;              // The current voltage on button 0
int V1 = 0;              // The current voltage on button 1
int V2 = 0;              // The current voltage on button 2
int V3 = 0;              // The current voltage on button 3
int V4 = 0;              // The current voltage on button 4
int V5 = 0;              // The current voltage on button 5

int Z0 = 0;              // Toggle value (0/1) for button 0
int Z1 = 0;              // Toggle value (0/1) for button 1
int Z2 = 0;              // Toggle value (0/1) for button 2
int Z3 = 0;              // Toggle value (0/1) for button 3
int Z4 = 0;              // Toggle value (0/1) for button 4
int Z5 = 0;              // Toggle value (0/1) for button 5




// ------------------------- SETUP LOOP ---------------------------------
void setup() {
  // put your setup code here, to run once:
  
  // Serial terminal to veiw code
  Serial.begin(115200);
  Serial.setTimeout(100);
  
  
  // Initilaize Realy Pins
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(R5, OUTPUT);
  pinMode(R6, OUTPUT);
  pinMode(R7, OUTPUT);
  pinMode(R8, OUTPUT);
  
  // Initilaize Button Pins (need to do this?)
  pinMode(b0, INPUT);
  pinMode(b1, INPUT);
  pinMode(B2, INPUT);
  pinMode(B3, INPUT);
  pinMode(B4, INPUT);
  pinMode(B5, INPUT);

  // Turn all lights off to start
  AllOff();
 
}


// ------------------------- MAIN LOOP -----------------------------
void loop() {
  // put your main code here, to run repeatedly:
  
  // Determine if any button is pressed and toggle values if necessary
  CheckButtonUpdates();
  
  
  if (Z0 == 1) {
    // Button Zero has been pressed!
    // Description of what happens here...
    AllOn();
    
    Serial.println("All Lights on");
  }
  
  if (Z1 == 1) {
    // Button 1 has been pressed!
    // Description of what happens here...
    
  }
  
  if (Z2 == 1) {
    // Buttion 2 has been pressed!
    // Description of what happens here...
    
  }
  
  if (Z3 == 1) {
    // Button 3 has been pressed!
    // Description of what happens here...
    
  }
  
  if (Z4 == 1) {
    // Buttion 4 has been pressed!
    // Description of what happens here...
    
  }
  
  if (Z5 == 1) {
    // Button 5 has been pressed!
    // Description of what happens here...
    
    AllOff();
  }
  
  
  
  // --- End of main loop
  
}










