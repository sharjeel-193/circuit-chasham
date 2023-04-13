#include <Servo.h>
#define ENT_BTN 2

Servo myservo1;  // create servo object to control a servo
Servo myservo2;

// twelve servo objects can be created on most boards

Servo servoArr[2] = {myservo1, myservo2};
String stringA = "10";
String stringB = "01";

int pos = 0;    // variable to store the servo position
bool btn_state = 0;
int state = 0;


void setup() {

  myservo1.attach(7);
  // myservo2.attach(7);  // attaches the servo on pin 9 to the servo object
  pinMode(ENT_BTN, INPUT_PULLUP);
  Serial.begin(9600);

}


void loop() {

  btn_state = digitalRead(ENT_BTN);
  if(btn_state == 0){
    Serial.println("State: "+ String(state));
    if(state == 1){
      myservo1.write(90);
      // myservo1.write(90); 
      // myservo2.write(0);  
      // for(int i=0; i<2; i++){
      //   if(stringA[i] == '1'){
      //     servoArr[i].write(90);
      //   } else {
      //     servoArr[i].write(0);
      //   }
        
      // }               
      state = 0;
    } else {
      myservo1.write(0);
      // myservo1.write(0); 
      // myservo2.write(90);
      // for(int i=0; i<2; i++){
      //   if(stringB[i] == '1'){
      //     servoArr[i].write(90);
      //   } else {
      //     servoArr[i].write(0);
      //   }
      // }  
      state = 1;     
    }
  }

  

  delay(1000);


}