/*
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/

long period = 1000;  //default blink period
int sensorValue;

// the setup function runs once when you press reset or power the board
void setup() {
  // initalize serial
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available()) {
    //char input = Serial.read();
    period = Serial.parseInt();    //read, write, print
    //Serial.print(period);   //to check if recieved
    //Serial.println(" recieved"); //debug
  }
  Serial.print(analogRead(5));
  Serial.print("/");
  Serial.print(analogRead(4));
  Serial.print("/");
  Serial.print(analogRead(3));
  Serial.print("/");
  Serial.print(analogRead(2));
  Serial.print("/");
  Serial.print(analogRead(1));
  Serial.print("/");
  Serial.print(analogRead(0));
  Serial.println();
  //period = Serial.parseInt();    //read, write, print
  //Serial.println(period);           //debug
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(period);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(period);                       // wait for a second
}
