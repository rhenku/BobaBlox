////////////////////////////////////////////
//  
//  BobaBlox Example Sketch: RELAY
//  
//  DECLARATION:
//
//  RELAY myRelay(pin)				// pin is RELAY pin
//
//  METHODS:
//
//  void on ();
//  void off ();
//  void set (state);					// Sets RELAY on if state is greater than zero
//  void blink ();						// Blinks RELAY once with default 250ms on and off
//  void blink (n);						// Blinks n times with default blink delay
//  void blink (n, delay);				// Blinks n times with specific delay
//  void blink (n, delayON, delayOFF);	// Blinks n times with delayON and delayOFF
//  
//
////////////////////////////////////////////

#include <BobaBlox.h>

// Declarations
RELAY boardRelay(1);

// Setup runs once
void setup() {                
}

// Loop repeats forever
void loop() {

  // Blinks RELAY. Uncomment one of the blinks below
  // Uncomment one of the lines below for it's effect
  boardRelay.blink();
  // boardRelay.blink(1, 100);
  // boardRelay.blink(1, 20, 250);


}
