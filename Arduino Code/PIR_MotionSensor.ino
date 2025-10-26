int pirPin = 2;        // PIR sensor output
int relayPin = 8;      // Relay control pin
int switchPin = 4;     // ON/OFF switch pin

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);  // External pull-down required if needed
  digitalWrite(relayPin, LOW);
  Serial.begin(9600);
}

void loop() 
{
  int switchState = digitalRead(switchPin);  // Read switch state
  int motion = digitalRead(pirPin);         // Read PIR state

  if (switchState == LOW) 
  {
    // Override: Force relay ON regardless of PIR
    digitalWrite(relayPin, LOW);
    Serial.println("Override: Relay always ON");
  } else if(motion == HIGH)// Normal operation: relay follows PIR
    {
      digitalWrite(relayPin, LOW);
      Serial.println("Motion detected - Relay ON");
    }
    else 
    {
      digitalWrite(relayPin, HIGH);
      Serial.println("No motion - Relay OFF");
    }
    

  delay(150);  // Debounce delay
}
