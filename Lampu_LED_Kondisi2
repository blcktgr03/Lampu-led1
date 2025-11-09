const int ledPin1 = 15;
const int ledPin2 = 14;
const int ledPin3 = 21;

const int buttonPin1 = 12; // 1 LED nyala
const int buttonPin2 = 13; // 2 LED nyala
const int buttonPin3 = 9;  // 3 LED nyala (semua nyala)

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}

void loop() {
  // Baca tombol 1
  if (digitalRead(buttonPin1) == LOW) {
    // LED 1 nyala
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }

  // Baca tombol 2
  else if (digitalRead(buttonPin2) == LOW) {
    // LED 1 & 2 nyala
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
  }

  // Baca tombol 3
  else if (digitalRead(buttonPin3) == LOW) {
    // Semua LED nyala
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
  }

  // Jika tidak ada tombol ditekan
  else {
    // Semua LED mati
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
}
