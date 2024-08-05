#include <Servo.h>
int buttonstate = 0;
Servo servo_7;
void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT_PULLUP);
  servo_7.attach(7,500,2500);
  servo_7.write(170);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //servo_8.write(0);
  buttonstate = digitalRead(9);
  if (buttonstate == LOW) {
    servo_7.write(70);
  } else {
    servo_7.write(170);
  }
}
