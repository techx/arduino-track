int ledPin1 = 1; // The pin of the first LED
int ledPin2 = 2; // etc.
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int buttonPin = 10;

// The state of the button
int buttonState = 0;

// Stores which LED is on
int lightPosition = 0;

// How much time in between LED light changes
int pause = 1000;

// What time it was when we last moved the light
// millis() returns the number of milliseconds since program start
long lastMove = millis();

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(buttonPin, INPUT);

  Serial.begin(9600);

  // Start a new game
  newGame();
}

void loop() {
  // Move the light
  if (millis() - lastMove >= pause) {
    lastMove = millis(); // Remember when we switched LED

    lightPosition++; // Increment the light position
    if (lightPosition >= 6) lightPosition = 1;

    move(lightPosition); // Update the light position
  }

  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    
    // If pressed when the light was in the middle, speed up and continue
    if (lightPosition == 3) {
      digitalWrite(ledPin3, LOW);
      delay(50);
      digitalWrite(ledPin3, HIGH);
      
      // Speed up the game
      if (pause > 700)      { pause -= 100; }
      else if (pause > 500) { pause -= 50;  }
      else if (pause > 300) { pause -= 25;  }
      else if (pause > 10)  { pause -= 10;  }
      else if (pause > 1)   { pause -= 1;   }

      Serial.print("Score: ");
      Serial.println(pause);

    }
    else { 
      // If pressed at the wrong time, show final score and start new game
      // Game over
      Serial.println("\nGAME OVER");
      Serial.print("Final Score: ");
      Serial.println(pause);
      Serial.print("\n");

      // Blink the LED that the player stopped on
      for (int x = 0; x <= 10; x++) {
        if (digitalRead(lightPosition + 1) == LOW) {
          digitalWrite(lightPosition + 1, HIGH);
        }
        else {
          digitalWrite(lightPosition + 1, LOW);
        }
        delay(200);
      }

      // Show an LED bar based on how well the player did
      digitalWrite(ledPin1,HIGH);
      delay(500);
      if (pause < 800) {
        digitalWrite(ledPin2, HIGH);
        delay(500);
      }
      if (pause < 600) {
        digitalWrite(ledPin3, HIGH);
        delay(500);
      }
      if (pause < 250) {
        digitalWrite(ledPin4, HIGH);
        delay(500);
      }
      if (pause < 100) {
        digitalWrite(ledPin5, HIGH);
        delay(500);
      }
      delay(3000);

      newGame();
    }
  }
}

// Updates the light's position
void move(int lightPosition) {
  // Turn off all LEDs
  for (int x = ledPin1; x <= ledPin5; x++) {
    digitalWrite(x, LOW);
  }
  // Turn on the LED
  digitalWrite(lightPosition + 1, HIGH);
}

void newGame() {
  lightPosition = 0;
  pause = 1000;
  Serial.println("New Game: Score 1000\n");
}
