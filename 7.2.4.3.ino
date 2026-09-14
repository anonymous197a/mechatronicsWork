int buttonID = 2;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(arduinoBoardLED, OUTPUT);
  pinMode(buttonID, INPUT);
}

void loop() {
    count = 0;
    Serial.println("Starting While Loop - Checking If Button is HIGH");
  	while (digitalRead(buttonID) != HIGH) {
        count++;
        Serial.println("Button " + String(digitalRead(buttonID)) + " : Make Check Loop # " + String(count));
        delay(100);
    }
    count = 0;
    Serial.println("Starting While Loop - Checking If Button is LOW");
    while (digitalRead(buttonID) != LOW) {
        count++;
        Serial.println("Button " + String(digitalRead(buttonID)) + " : Break Check Loop # " + String(count));
        delay(100);
    }
    Serial.println("Ending Make/Break While Loop");
} 