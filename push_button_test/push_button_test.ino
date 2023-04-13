#define BTN_PIN 8
bool btn_state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BTN_PIN, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  btn_state = digitalRead(BTN_PIN);
  Serial.println(btn_state);
  delay(1000);

}
