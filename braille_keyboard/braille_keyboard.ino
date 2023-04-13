
#define DOT1 2
#define DOT2 3
#define DOT3 4
#define DOT4 5
#define DOT5 6
#define DOT6 7

#define ENT_BTN 2
bool btn_state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(DOT1, INPUT_PULLUP);
  pinMode(DOT2, INPUT_PULLUP);
  pinMode(DOT3, INPUT_PULLUP);
  pinMode(DOT4, INPUT_PULLUP);
  pinMode(DOT5, INPUT_PULLUP);
  pinMode(DOT6, INPUT_PULLUP);

  pinMode(ENT_BTN, INPUT_PULLUP);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(String(digitalRead(DOT1))+String(digitalRead(DOT2))+String(digitalRead(DOT3))+String(digitalRead(DOT4))+String(digitalRead(DOT5))+String(digitalRead(DOT6)));
  // delay(1000);
  int btn_state1 = digitalRead(DOT1);
  int btn_state2 = digitalRead(DOT2);
  int btn_state3 = digitalRead(DOT3);
  int btn_state4 = digitalRead(DOT4);
  int btn_state5 = digitalRead(DOT5);
  int btn_state6 = digitalRead(DOT6);
  // Serial.println(btn_state);
  // if(btn_state == 0){
  //   Serial.println("Button Pressed");
  //   Serial.println(String(digitalRead(DOT1))+String(digitalRead(DOT2))+String(digitalRead(DOT3))+String(digitalRead(DOT4))+String(digitalRead(DOT5))+String(digitalRead(DOT6)));
  // }
  Serial.print(btn_state1);
  Serial.print(btn_state2);
  Serial.print(btn_state3);
  Serial.print(btn_state4);
  Serial.print(btn_state5);
  Serial.println(btn_state6);
  
  // Serial.print();
  delay(500);
  
  

}
