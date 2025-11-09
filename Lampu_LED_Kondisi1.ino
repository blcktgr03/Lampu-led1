const int ledPin1 = 15;
const int buttonPin1 = 12;

const int ledPin2 = 14;
const int buttonPin2 = 13;

const int ledPin3 = 21;   // 
const int buttonPin3 = 9; // 

bool ledState2 = false;  // Status LED 2
bool ledState3 = false;  // Status LED 3
bool button2Pressed = false; // Flag tombol 2
bool button3Pressed = false; // Flag tombol 3

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP);

  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT_PULLUP);

  pinMode(ledPin3, OUTPUT);
  pinMode(buttonPin3, INPUT_PULLUP);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}

void loop() {
  // --- Tombol 1: nyala selama ditekan ---
  if (digitalRead(buttonPin1) == LOW) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }

  // --- Tombol 2: toggle LED 2 ---
  if (digitalRead(buttonPin2) == LOW) {
    if (!button2Pressed) {
      button2Pressed = true;
      ledState2 = !ledState2;
      digitalWrite(ledPin2, ledState2 ? HIGH : LOW);
    }
  } else {
    button2Pressed = false;
  }

  // --- Tombol 3: toggle LED 3 ---
  if (digitalRead(buttonPin3) == LOW) {
    if (!button3Pressed) {
      button3Pressed = true;
      ledState3 = !ledState3;
      digitalWrite(ledPin3, ledState3 ? HIGH : LOW);
    }
  } else {
    button3Pressed = false;
  }
}
