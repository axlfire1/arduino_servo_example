#include <Servo.h>

Servo myservo;  // crea el objeto servo

int pos = 0;    // posicion del servo
int output = 12;

void setup() {
  myservo.attach(output);
}

void loop() {
  for(int i = 0 ; i <= 10; i++){
    for (pos = 0; pos <= 180; pos += 1) {
      myservo.write(pos);              
      delay(2);                       
    }
  
    for (pos = 180; pos >= 0; pos -= 1) {
      myservo.write(pos);              
      delay(2);                       
    }
  }
  
  delay(10000);
}
