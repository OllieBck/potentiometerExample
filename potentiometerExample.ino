void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600); // set baud rate for serial communication

 while (Serial.available() <= 0) {
    Serial.println("hello"); // send "hello" until receive response from website
    delay(300);
  } 
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(A0); // get analog values from pin A0
  Serial.println(potValue); // print line the value
  delay(500); // wait half a second before sending next value
}
