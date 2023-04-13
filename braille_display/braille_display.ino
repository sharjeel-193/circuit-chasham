#include <Servo.h>
#include <SoftwareSerial.h>

#define ENT_BTN 13

SoftwareSerial bluetooth(14, 15);
bool btn_state = 0;

Servo pin11, pin12, pin13, pin14, pin15, pin16;
Servo brailleArr[6] = {pin11, pin12, pin13, pin14, pin15, pin16};

String stringA = "111111";
String stringN = "111110";

int state = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(ENT_BTN, INPUT_PULLUP);
  pin11.attach(30);
  pin12.attach(32);
  pin13.attach(34);
  pin14.attach(36);
  pin15.attach(38);
  pin16.attach(40);
  // pin14.attach(33);
  // pin15.attach(34);
  // pin16.attach(35);
  Serial.begin(9600);
  bluetooth.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  btn_state = digitalRead(ENT_BTN);
  // Serial.println(btn_state);

  

  for(int i=0; i<6; i++){
    if(stringA[i] == '1'){
      brailleArr[i].write(90);
    } else {
      brailleArr[i].write(0);
    }
  }
   


  // if(btn_state == 0){
    
  //   if(state == 1){
  //     for(int i=0; i<3; i++){
  //       if(stringA[i] == '1'){
  //         brailleArr[i].write(90);
  //       } else {
  //         brailleArr[i].write(0);
  //       }
  //     }
  //     // pin11.write(90);
  //     state = 0;
  //   } else {
  //     for(int i=0; i<6; i++){
  //       if(stringN[i] == '1'){
  //         brailleArr[i].write(90);
  //       } else {
  //         brailleArr[i].write(0);
  //       }
  //     } 
  //     // pin11.write(0);
  //     state = 1;     
  //   }
  // }


}