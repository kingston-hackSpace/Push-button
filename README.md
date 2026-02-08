# PUSH BUTTON - LED
Turn on an LED using a Push-Button (pull-up) and Arduino.

-----
# SETTING UP BEFORE STARTING

[Understanding push buttons](https://github.com/kingston-hackSpace/Button_LED/blob/main/PushButton.png)

[Understanding LEDs](https://github.com/kingston-hackSpace/Button_LED/blob/main/Understanding_LEDs.png)

-----
### HARDWARE

- ARDUINO UNO
- Push-button
- LED
- Resistor 220ohms

-----

### WIRING

See diagram [here](https://github.com/kingston-hackSpace/Button_LED/blob/main/Diagram.png)

Remember that LEDs have a positive and negative pin. You may burn the LED if wired incorrectly. See [here](https://github.com/kingston-hackSpace/Button_LED/blob/main/Understanding_LEDs.png)

-----

### PROGRAMMING THE PUSH-BUTTON

**STEP 1: SIMPLE BUTTON STATE (LOW/HIGH)**

- Upload [this code](https://github.com/kingston-hackSpace/Button_LED/blob/main/Button_LED.ino) to your Arduino Board

- Does the LED turn on/off when you press/release the button?

- How it works:

    - We are asking the Arduino on every single loop: What is the electrical level on the button pin right now? We are constantly monitoring the button. 

**STEP 2: EDGE DETECTION / CREATE A COUNTER**

- Follow [this tutorial](https://electricalportail.blogspot.com/2016/07/tutorial-09-button-state-change.html)

- Here, we are no longer interested in “Is the button pressed?”. Instead, we ask “Did something just happen?”

- In the previous example (STEP 1), the button presses would interfere with timing logic in our code. Instead, the logic used in this new example (STEP 2) is essential for multitasking, without stopping anything else in our code. In other words, our code won't be executing any isntructions while there is no change in buttonState. 

**STEP 3: DEBOUNCING**

- The Arduino loops very fast and sometimes things in the physical world like buttons may not be fast enough. To eliminate errors and false readings from buttons and other switches, a “debounce” routine can be used. We will create a "debounce timer" to avoid this problem.

- Follow [this tutorial](https://arduinogetstarted.com/tutorials/arduino-button-debounce)


-----

### FURTHER LEARNING

[Push-Button more tutorials](https://arduinofactory.com/push-button/)

[Understanfing Pull-up and Pull-Down](https://roboticsbackend.com/arduino-input_pullup-pinmode/)

[How to connect a push button or switch](https://lab.arts.ac.uk/books/physical-computing/page/how-to-connect-a-push-button-or-switch)

