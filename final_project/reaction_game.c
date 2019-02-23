// Declare constants at the top of the file

// #TODO Which pins will you use for the LEDs?
int Led1Pin =  // The pin of the first LED
int Led2Pin =  // etc.
int Led3Pin =
int Led4Pin =
int Led5Pin =

// #TODO Which pin will you use for the button?
int ButtonPin =

// The state of the button the last time we checked
boolean old_val = LOW;

// Stores which LED is on
int LightPosition = 0;

// How much time in between LED light changes
int pause = 1000;

// What time it was when we last moved the light
// millis() returns the number of milliseconds since program start
long lastMove = millis();

void setup() {
  pinMode(Led1Pin, OUTPUT);
  pinMode(Led2Pin, OUTPUT);
  pinMode(Led3Pin, OUTPUT);
  pinMode(Led4Pin, OUTPUT);
  pinMode(Led5Pin, OUTPUT);
  pinMode(ButtonPin, INPUT);

  Serial.begin(9600);

  // Start a new game
  newGame();
}

void loop() {
  // Move the light
  if (millis() - lastMove >= pause) {
    lastMove = millis(); // Remember when we switched LED

    LightPosition++; // Increment the light position
    if (LightPosition >= 6) LightPosition = 1;

    move(LightPosition); // Update the light position
  }

  // When the player presses the button...
  if (digitalRead(ButtonPin) == HIGH && old_val == LOW) {
    // If the pressed it when the light was in the middle, speed up and continue
    if (LightPosition == 3) {
      digitalWrite(Led3Pin, LOW);
      delay(50);
      digitalWrite(Led3Pin, HIGH);
      // Speed up the game

      // #TODO @rinik make this not garbage
      if (pause > 700)      { pause -= 100; }
      else if (pause > 500) { pause -= 50;  }
      else if (pause > 300) { pause -= 25;  }
      else if (pause > 10)  { pause -= 10;  }
      else if (pause > 1)   { pause -= 1;   }

      Serial.print("Score: ");
      Serial.println(pause);

  }
  else { // If pressed at the wrong time, show their final score and start a new game
      // Game over
      Serial.println("GAME OVER");
      Serial.print("Final Score ");
      Serial.println(pause);

      // Blink the Led that the player stopped on
      for (int x = 0; x <= 10; x++) {
        if (digitalRead(LightPosition + 1) == LOW) {
          digitalWrite(LightPosition + 1, HIGH);
        }
        else {
          digitalWrite(LightPosition + 1, LOW);
        }
        delay(200);
      }

      // Show an LED bar based on how well the player did
      digitalWrite(Led1Pin,HIGH);
      delay(500);
      if (pause < 800) {
        digitalWrite(Led2Pin, HIGH);
        delay(500);
      }
      if (pause < 600) {
        digitalWrite(Led3Pin, HIGH);
        delay(500);
      }
      if (pause < 250) {
        digitalWrite(Led4Pin, HIGH);
        delay(500);
      }
      if (pause < 100) {
        digitalWrite(Led5Pin, HIGH);
        delay(500);
      }
      delay(3000);

      newGame();
    }
  }

  old_val = digitalRead(ButtonPin);

}

// Updates the light's position
void move(int LightPosition) {
  // Turn off all LEDs
  for (int x = Led1Pin; x <= Led5Pin;x++) {
    digitalWrite(x, LOW);
  }
  // Turn on the LED
  digitalWrite(LightPosition + 1, HIGH);
}

void newGame() {
  LightPosition = 0;
  pause = 1000;
  // Can you print the score on an LCD display instead?
  Serial.println("New Game: Score 1000");
}
