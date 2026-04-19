int delay_wait = 500;

const int BRIGHTNESS_MIN = 0;
const int BRIGHTNESS_MAX = 220;
const int BRIGHTNESS_STEP = 2;

int led_1_pin = 3;   // PWM
int led_2_pin = 5;   // PWM
int led_3_pin = 6;   // PWM
int led_4_pin = 9;   // PWM
int led_5_pin = 10;  // PWM

int pins[5] = {led_1_pin, led_2_pin, led_3_pin, led_4_pin, led_5_pin};

void setup() {
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT);
  pinMode(led_3_pin, OUTPUT);
  pinMode(led_4_pin, OUTPUT);
  pinMode(led_5_pin, OUTPUT);
}

// Breathing Effect (fade in and out)
void loop() {
  //int pins[5] = {led_1_pin, led_2_pin, led_3_pin, led_4_pin, led_5_pin};
  // Fade all LEDs in
  for (int i = BRIGHTNESS_MIN; i <= BRIGHTNESS_MAX; i = i + BRIGHTNESS_STEP) {
    analogWrite(led_1_pin, i);
    analogWrite(led_2_pin, i);
    analogWrite(led_3_pin, i);
    analogWrite(led_4_pin, i);
    analogWrite(led_5_pin, i);
    delay(20);
  }
  // Fade all LEDs out
  for (int i = BRIGHTNESS_MAX; i >= BRIGHTNESS_MIN; i = i - BRIGHTNESS_STEP) {
    analogWrite(led_1_pin, i);
    analogWrite(led_2_pin, i);
    analogWrite(led_3_pin, i);
    analogWrite(led_4_pin, i);
    analogWrite(led_5_pin, i);
    delay(20);
  }
  delay(1000);
}



//Wave Effect (one LED at a time fades)
// void loop() {
//   int pins[5] = {led_1_pin, led_2_pin, led_3_pin, led_4_pin, led_5_pin};
//   for (int led = 0; led < 5; led++) {
//     // Fade in
//     for (int i = 0; i <= 255; i++) {
//       analogWrite(pins[led], i);
//       delay(5);
//     }
//     // Fade out
//     for (int i = 255; i >= 0; i--) {
//       analogWrite(pins[led], i);
//       delay(5);
//     }
//   }
//   delay(1000);
// }

//Knight Rider Effect (bouncing light)
// void loop() {
//   int pins[5] = {led_1_pin, led_2_pin, led_3_pin, led_4_pin, led_5_pin};
//    // Go left to right
//   for (int led = 0; led < 5; led++) {
//     analogWrite(pins[led], 255);
//     delay(100);
//     analogWrite(pins[led], 0);
//   }
//   // Go right to left
//   for (int led = 3; led >= 0; led--) {
//     analogWrite(pins[led], 255);
//     delay(100);
//     analogWrite(pins[led], 0);
//   }
//   delay(1000);
// }

// Random Flicker (like candles)
// void loop() {
//   int pins[5] = {led_1_pin, led_2_pin, led_3_pin, led_4_pin, led_5_pin};
//   for (int led = 0; led < 5; led++) {
//     int brightness = random(10, 255);  // random brightness
//     analogWrite(pins[led], brightness);
//   }
//   delay(random(50, 150));  // random delay
// }

// SOS Morse Code
// void allLeds(int brightness) {
//   for (int led = 0; led < 5; led++) {
//     analogWrite(pins[led], brightness);
//   }
// }

// void dot() { allLeds(255); delay(200); allLeds(0); delay(200); }
// void dash() { allLeds(255); delay(600); allLeds(0); delay(200); }

// void loop() {
//   // S = dot dot dot
//   dot(); dot(); dot();
//   delay(400);
//   // O = dash dash dash
//   dash(); dash(); dash();
//   delay(400);
//   // S = dot dot dot
//   dot(); dot(); dot();
//   delay(1000);  // pause between SOS
// }


//Equalizer Bounce
// void loop() {
//   // Each LED bounces at different speeds
//   for (int i = 0; i < 360; i++) {
//     analogWrite(pins[0], (sin(i * 0.05) + 1) * 127);
//     analogWrite(pins[1], (sin(i * 0.04) + 1) * 127);
//     analogWrite(pins[2], (sin(i * 0.03) + 1) * 127);
//     analogWrite(pins[3], (sin(i * 0.02) + 1) * 127);
//     analogWrite(pins[4], (sin(i * 0.01) + 1) * 127);
//     delay(20);
//   }
// }
