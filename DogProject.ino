void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    digitalWrite(2, HIGH);
    String msg = Serial.readStringUntil('\n'); // Read command
    msg.trim(); // Remove any extra spaces or newlines
    if (msg == "ON") {
      Serial.println("LED is on now !");   
      digitalWrite(5, HIGH); // Turn LED  
    } 
    else if (msg == "OFF") {
      Serial.println("LED is off now !"); 
      digitalWrite(5, LOW); // Turn LED   
    } 
  if (msg == "GO") {
      Serial.println("LED is on now !");   
      digitalWrite(9, HIGH); // Turn LED  
      digitalWrite(5, HIGH);
    } 
    else if (msg == "STOP") {
      Serial.println("LED is off now !"); 
      digitalWrite(9, LOW); // Turn LED   
    } 
  }
  
}
