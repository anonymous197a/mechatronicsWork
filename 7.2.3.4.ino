const int trigPin = 11;
const int echoPin = 12;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
}

int get_distance() {
  int toReturn = 0;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  toReturn = duration * 0.034 / 2;

  return toReturn;
}

void loop() {
    int count = 0;

    while (get_distance() > 5) {
        Serial.println("Waiting to Detect An Object");
        delay(100);
    }
    Serial.println("Object Detected & Present");

    while (get_distance() < 5) {
        count++;
        Serial.println(String(count) + " Objects Detected");
        delay(100);
    }
    count = 0;
    Serial.println("Detected Object Is Gone");
}