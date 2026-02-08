// EDGE DETECTION + COUNTER

const int buttonPin = 2;    // push-button pin
const int ledPin = 7;       // LED pin

int buttonState = 0;        // current button state
int lastButtonState = 0;    // previous button state
int counter = 0;            // press counter

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // detect a change in button state
  if (buttonState != lastButtonState) {
    
    // only increment counter on button press (LOW due to INPUT_PULLUP)
    if (buttonState == LOW) {
      counter++;
      Serial.print("Counter: ");
      Serial.println(counter);
    }

    // save the current state for next loop iteration
    lastButtonState = buttonState;
  }

  // LED on every 4 counts
  if (counter % 4 == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
