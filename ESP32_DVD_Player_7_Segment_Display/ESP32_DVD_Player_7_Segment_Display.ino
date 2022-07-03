/* SEVEN-segment Pins
YZ50282IJ1S LED SEVEN-segment display from DVD player (green)

Common Anode (digit pins)

13   12  11  10  9   8  7   6   5     4     3     2   1
g   f   e   d   c   b   a   digit5  digit4  digit3  digit2  digit1  decimal separator


left most separator = 9 & 1
right most separator = 8 & 1
*/

const int SEVEN_SEG_DIGIT_1 = 21;
const int SEVEN_SEG_DIGIT_2 = 22;

const int SEVEN_SEG_A = 19;
const int SEVEN_SEG_B = 18;
const int SEVEN_SEG_C = 17;
const int SEVEN_SEG_D = 16;
const int SEVEN_SEG_E = 15;
const int SEVEN_SEG_F = 14;
const int SEVEN_SEG_G = 13;

/* Change depending on whether common anode or common cathode */
#define LED_ON LOW
#define LED_OFF HIGH

void TurnDigitOn(int digit) {
  if (digit <= 0) return;
  if (digit > 2) return;
  switch (digit) {
    case 1:
      digitalWrite(SEVEN_SEG_DIGIT_1, LED_OFF);
      break;
    case 2:
      digitalWrite(SEVEN_SEG_DIGIT_2, LED_OFF);
      break;
  }
}

void TurnDigitOff(int digit) {
  if (digit <= 0) return;
  if (digit > 2) return;
  switch (digit) {
    case 1:
      digitalWrite(SEVEN_SEG_DIGIT_1, LED_ON);
      break;
    case 2:
      digitalWrite(SEVEN_SEG_DIGIT_2, LED_ON);
      break;
  }
}

void SEVENSegmentDisplayDigit(int digit) {
  switch (digit) {
    case 0:
      digitalWrite(SEVEN_SEG_A, LED_ON);
      digitalWrite(SEVEN_SEG_B, LED_ON);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_D, LED_ON);
      digitalWrite(SEVEN_SEG_E, LED_ON);
      digitalWrite(SEVEN_SEG_F, LED_ON);
      digitalWrite(SEVEN_SEG_G, LED_OFF);
      break;
    case 1:
      digitalWrite(SEVEN_SEG_A, LED_OFF);
      digitalWrite(SEVEN_SEG_B, LED_ON);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_E, LED_OFF);
      digitalWrite(SEVEN_SEG_D, LED_OFF);
      digitalWrite(SEVEN_SEG_F, LED_OFF);
      digitalWrite(SEVEN_SEG_G, LED_OFF);
      break;
    case 2:
      digitalWrite(SEVEN_SEG_A, LED_ON);
      digitalWrite(SEVEN_SEG_B, LED_ON);
      digitalWrite(SEVEN_SEG_C, LED_OFF);
      digitalWrite(SEVEN_SEG_D, LED_ON);
      digitalWrite(SEVEN_SEG_E, LED_ON);
      digitalWrite(SEVEN_SEG_F, LED_OFF);
      digitalWrite(SEVEN_SEG_G, LED_ON);
      break;
    case 3:
      digitalWrite(SEVEN_SEG_A, LED_ON);
      digitalWrite(SEVEN_SEG_B, LED_ON);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_D, LED_ON);
      digitalWrite(SEVEN_SEG_E, LED_OFF);
      digitalWrite(SEVEN_SEG_F, LED_OFF);
      digitalWrite(SEVEN_SEG_G, LED_ON);
      break;
    case 4:
      digitalWrite(SEVEN_SEG_A, LED_OFF);
      digitalWrite(SEVEN_SEG_B, LED_ON);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_D, LED_OFF);
      digitalWrite(SEVEN_SEG_E, LED_OFF);
      digitalWrite(SEVEN_SEG_F, LED_ON);
      digitalWrite(SEVEN_SEG_G, LED_ON);
      break;
    case 5:
      digitalWrite(SEVEN_SEG_A, LED_ON);
      digitalWrite(SEVEN_SEG_B, LED_OFF);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_D, LED_ON);
      digitalWrite(SEVEN_SEG_E, LED_OFF);
      digitalWrite(SEVEN_SEG_F, LED_ON);
      digitalWrite(SEVEN_SEG_G, LED_ON);
      break;
    case 6:
      digitalWrite(SEVEN_SEG_A, LED_ON);
      digitalWrite(SEVEN_SEG_B, LED_OFF);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_D, LED_ON);
      digitalWrite(SEVEN_SEG_E, LED_ON);
      digitalWrite(SEVEN_SEG_F, LED_ON);
      digitalWrite(SEVEN_SEG_G, LED_ON);
      break;
    case 7:
      digitalWrite(SEVEN_SEG_A, LED_ON);
      digitalWrite(SEVEN_SEG_B, LED_ON);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_D, LED_OFF);
      digitalWrite(SEVEN_SEG_E, LED_OFF);
      digitalWrite(SEVEN_SEG_F, LED_OFF);
      digitalWrite(SEVEN_SEG_G, LED_OFF);
      break;
    case 8:
      digitalWrite(SEVEN_SEG_A, LED_ON);
      digitalWrite(SEVEN_SEG_B, LED_ON);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_D, LED_ON);
      digitalWrite(SEVEN_SEG_E, LED_ON);
      digitalWrite(SEVEN_SEG_F, LED_ON);
      digitalWrite(SEVEN_SEG_G, LED_ON);
      break;
    case 9:
      digitalWrite(SEVEN_SEG_A, LED_ON);
      digitalWrite(SEVEN_SEG_B, LED_ON);
      digitalWrite(SEVEN_SEG_C, LED_ON);
      digitalWrite(SEVEN_SEG_D, LED_OFF);
      digitalWrite(SEVEN_SEG_E, LED_OFF);
      digitalWrite(SEVEN_SEG_F, LED_ON);
      digitalWrite(SEVEN_SEG_G, LED_ON);
      break;
  }
}


void SEVENSegmentDisplayOff() {
//  SEVENSegmentSetAllPinsAsInput();
  digitalWrite(SEVEN_SEG_A, LED_OFF);
  digitalWrite(SEVEN_SEG_B, LED_OFF);
  digitalWrite(SEVEN_SEG_C, LED_OFF);
  digitalWrite(SEVEN_SEG_D, LED_OFF);
  digitalWrite(SEVEN_SEG_E, LED_OFF);
  digitalWrite(SEVEN_SEG_F, LED_OFF);
  digitalWrite(SEVEN_SEG_G, LED_OFF);
}

void SEVENSegmentSetAllPinsAsOutput() {
  pinMode(SEVEN_SEG_A, OUTPUT);
  pinMode(SEVEN_SEG_B, OUTPUT);
  pinMode(SEVEN_SEG_C, OUTPUT);
  pinMode(SEVEN_SEG_D, OUTPUT);
  pinMode(SEVEN_SEG_E, OUTPUT);
  pinMode(SEVEN_SEG_F, OUTPUT);
  pinMode(SEVEN_SEG_G, OUTPUT);
}

void SEVENSegmentSetAllPinsAsInput() {
  pinMode(SEVEN_SEG_A, INPUT);
  pinMode(SEVEN_SEG_B, INPUT);
  pinMode(SEVEN_SEG_C, INPUT);
  pinMode(SEVEN_SEG_D, INPUT);
  pinMode(SEVEN_SEG_E, INPUT);
  pinMode(SEVEN_SEG_F, INPUT);
  pinMode(SEVEN_SEG_G, INPUT);
}

void displayTwoNumbers(int tens, int units, int delayInMs) {
  // Display tens
  SEVENSegmentDisplayDigit(tens);
  TurnDigitOn(2);
  delay(delayInMs);
  TurnDigitOff(2);
  
  // Display units
  SEVENSegmentDisplayDigit(units);
  TurnDigitOn(1);
  delay(delayInMs);
  TurnDigitOff(1);
}

void setup() {
  // put your setup code here, to run once:
  SEVENSegmentSetAllPinsAsOutput();

  pinMode(SEVEN_SEG_DIGIT_1, OUTPUT);
  pinMode(SEVEN_SEG_DIGIT_2, OUTPUT);

  // Turn on all segments on by displaying the number 8
  TurnDigitOn(1);
  SEVENSegmentDisplayDigit(8);
  delay(1000);
  TurnDigitOff(1);
  TurnDigitOn(2);
  delay(1000);
  SEVENSegmentDisplayOff();
  TurnDigitOff(2);
  delay(1000);
}

void loop() {
  for (int j = 0; j < 100; j++) {
    int tens = j / 10;
    int units = j % 10;
    for (int i = 0; i < 10; i++) {
      displayTwoNumbers(tens, units, 10);
    }
  }
}
