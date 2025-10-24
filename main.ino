int ledPin = 3; //LED connected to digital pin 3

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); //Set ledPin as output
}

void loop() {
  int sensorValue = analogRead(A0); //reads the input on analog pin A0
  Serial.println(sensorValue);
  
  if(sensorValue < 30){ 
    analogWrite(ledPin, 255); //Turn LED fully on
  }
  else{ //When it's bright
    analogWrite(ledPin, 0); //Turn LED off
  }
  delay(500); 
}
