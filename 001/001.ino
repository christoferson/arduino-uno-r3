/*
 * LED Blink Example
 * 
 * Description:
 *   Basic Arduino sketch that blinks the built-in LED on and off
 *   at 1-second intervals. This is the classic "Hello World" 
 *   program for Arduino microcontrollers.
 * 
 * Hardware:
 *   - Arduino Uno R3 (or compatible board)
 *   - Uses built-in LED (typically connected to pin 13)
 * 
 * Behavior:
 *   - LED turns ON for 1 second
 *   - LED turns OFF for 1 second
 *   - Cycle repeats indefinitely
 * 
 * Notes:
 *   LED_BUILTIN_PIN_NUMBER is manually defined as pin 13, which is the
 *   standard built-in LED pin on Arduino Uno R3
 *   LED_BLINK_RATE_MS defines the delay in milliseconds for the blink rate
 */

// Define the built-in LED pin
const int LED_BUILTIN_PIN_NUMBER = 13;

// Define the blink rate in milliseconds
const int LED_BLINK_RATE_MS = 1000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN_PIN_NUMBER as an output.
  pinMode(LED_BUILTIN_PIN_NUMBER, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN_PIN_NUMBER, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(LED_BLINK_RATE_MS);                    // wait for the specified blink rate
  digitalWrite(LED_BUILTIN_PIN_NUMBER, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(LED_BLINK_RATE_MS);                    // wait for the specified blink rate
}