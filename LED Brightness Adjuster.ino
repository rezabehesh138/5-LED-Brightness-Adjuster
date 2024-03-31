int LED = 3; //LED connected to digital pin 3
void setup() {
  pinMode(3, OUTPUT); //sets the pin 3 (LED) as output
  Serial.begin(9600); //setup serial
}

void loop() {

  float volt = analogRead(A0); //Read the input pin
  float RealVolt = (volt / 1023) * 5; //Calculating the real voltage value based on the analog sensor reading
  Serial.print("voltage = "); //show character
  Serial.println(RealVolt);//show voltage value
  //  delay(1000); //waits for asecond


  int Range = map(volt, 0, 1023, 0, 255); // volt values go from 0 to 1023 , Range values go from 0 to 255
  analogWrite(LED, Range);


}
