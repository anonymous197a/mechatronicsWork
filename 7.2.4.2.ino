//.ino file format sucks, no intellisense
const int arduinoBoardLED = 13; // LED on pin 13

void setup() {
  Serial.begin(9600);
  pinMode(arduinoBoardLED, OUTPUT);
  int var = 0;
  Serial.println("Starting While Loop - Print Count Variable");
  //I don't know if its possible in C++ but you can put the var++ in the condition if you put a comma, atleast in Java
  while (var < 200) {
    Serial.println(var);
    var++;
  }
  Serial.println("Ending While Loop");
}

void loop() {

}