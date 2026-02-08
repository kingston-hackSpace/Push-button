// EDGE DETECTION

const int buttonPin = 2;
const int ledPin = 7;

int buttonState = 0;
int lastButtonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // detect change
  if (buttonState != lastButtonState) {
    if (buttonState == LOW) {
      digitalWrite(ledPin, HIGH);
      Serial.println("pressed");
    } else{
      digitalWrite(ledPin, LOW);
      Serial.println("released");
    }
  }
  lastButtonState = buttonState;
}
