#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5;
int piezoPin = 0, range = 50, sensor = 0, pos = 0, pulse = 0, previous = 0, counter = 0, timer = 0;

void setup() {
  Serial.begin(9600);
  // regular servo
  servo1.attach(8);
  // upside-down servo
  servo2.attach(10);
  // regular servo initial position
  servo1.write(180);
  // upside-down servo initial position
  servo2.write(0);
  previous = analogRead(piezoPin);
  delay(1000);
}

void loop() {
  pulse = analogRead(piezoPin);
  Serial.println(pulse);
  if (pulse - previous > 4) {
    counter++;
    if (counter == 10 && timer <= 0) {
      counter = 0;
      timer = 40;

      // curl fingers
      servo1.write(160);
      servo2.write(20);

      int stopwatch = 0;
      while (pulse - previous > 4) {
        delay(25);
        stopwatch += 25;
        pulse = analogRead(piezoPin);
        Serial.println(pulse);
        if (stopwatch > 7000){
          break;
        }
      }
      previous = pulse;

      //uncurl
      servo1.write(180);
      servo2.write(0);
    }
    timer--;
  } else {
    counter = 0;
    timer--;
    previous = pulse;
  }
  delay(25);
}
