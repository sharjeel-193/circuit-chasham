String data = "";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0) {}     //wait for data available
  data = Serial.readString();  //read until timeout
  Serial.println(data);

}
