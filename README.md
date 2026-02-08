# PUSH BUTTON

[Understanding push buttons](https://github.com/kingston-hackSpace/Button_LED/blob/main/PushButton.png)

-----
### HARDWARE

- ARDUINO UNO
- Push-button
- LED
- Resistor 220 ohms
- Resistor 10K ohms

Note: Remember that LEDs have a positive and negative lead. You may burn the LED if wired incorrectly. See [here](https://github.com/kingston-hackSpace/Button_LED/blob/main/Understanding_LEDs.png)

-----

### PROGRAMMING THE PUSH-BUTTON

**EXAMPLE 1: SIMPLE BUTTON STATE**

- See wiring-diagram [here](https://github.com/kingston-hackSpace/Button_LED/blob/main/Diagram.png)

- Upload [this code](https://github.com/kingston-hackSpace/Push-button/blob/main/simpleButton.ino) to your Arduino Board

- Check your result:
    
    - Does the LED turn on/off when you press/release the button?
    
    - Does it turn off when you release it?
    
    - Open the Serial Monitor — do you see “pressed” and “not pressed” updating?

- How it works:

    - In this code, we are using the variable *buttonState* to check if our Arduino is receiving a HIGH (5V) or LOW (0V) signal from the button.
 
    - if *buttonState == LOW*, then turn-on the LED.
 
- This *buttonState* logic works for simple interactions such as this one, in which the LED is following exactly the behaviour of the button.

- However, it is not suitable for counters, or more complex escenarios such as event-based actions. 
      
**EXAMPLE 2: EDGE DETECTION**

- Use the same wiring as before.

- Upload [this code] to your Arduino board.

- Here, we are no longer interested in “Is the button pressed?”. Instead, we ask “Did something just happen?”


**EXAMPLE 3: DEBOUNCING**

- The Arduino loops very fast and sometimes things in the physical world like buttons may not be fast enough. To eliminate errors and false readings from buttons and other switches, a “debounce” routine can be used. We will create a "debounce timer" to avoid this problem.

- Follow [this tutorial](https://arduinogetstarted.com/tutorials/arduino-button-debounce)


-----

### FURTHER LEARNING

[Push-Button more tutorials](https://arduinofactory.com/push-button/)

[Understanfing Pull-up and Pull-Down](https://roboticsbackend.com/arduino-input_pullup-pinmode/)

[How to connect a push button or switch](https://lab.arts.ac.uk/books/physical-computing/page/how-to-connect-a-push-button-or-switch)

