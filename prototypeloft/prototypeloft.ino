int bluePin=11; 
int greenPin=10;
int redPin=6;
int brightness=25;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(bluePin, OUTPUT); // set redPin to be an output
pinMode(greenPin, OUTPUT); // set greenPin to be an output
pinMode(redPin, OUTPUT); // set bluePin to be an output

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(bluePin, HIGH); // turn off red pin
digitalWrite(greenPin, 0); // turn off green pin
digitalWrite(redPin, 0); // write 75 to blue pin

}
