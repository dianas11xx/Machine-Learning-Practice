#include <Servo.h>

Servo faceupServo, facedownServo;
int piezoPin = 0, pos = 0, curPulse = 0, precurPulse = 0, activationEnergy = 0, timer = 0;

int histLen = 10;
int lowest = 35000;
int history[histLen];

void setup() {
 /* Connect this Arduino to a computer, if one exists */
 Serial.begin(9600);

 /* Connect servos to AREF pins 8 and 10, where the signals of the servos are sent */
 faceupServo.attach(8);
 facedownServo.attach(10);

 /* initialize positions and values */
 faceupServo.write(180);
 facedownServo.write(0);
 precurPulse = analogRead(piezoPin);
 for (byte i = 0; i < histLen; i++) {
  history[i] = -1;
 }
 delay(1000);
}

/* The algorithm accounts for these scenarios:
 *  (1) normal state
 *  (2) abnormal state
 *  (3) tensed muscles
 */
void loop() {
 curPulse = analogRead(piezoPin);
 Serial.println(curPulse);
 if (curPulse < lowest) {
  lowest = curPulse;
 }
 if (curPulse - precurPulse > 4) {
  activationEnergy++;
  if (activationEnergy == 10 && timer <= 0) {
   activationEnergy = 0;
   timer = 40;

   /* curl fingers */
   faceupServo.write(0);
   facedownServo.write(180);

   while (curPulse - precurPulse > 4) {
    delay(25);
    curPulse = analogRead(piezoPin);
    Serial.println(curPulse);
    
    if (history[histLen-1] != -1) {
     for (byte i = 0; i < histLen-1; i++) {
      history[i] = history[i + 1];
     }
     history[histLen-1] = curPulse;
    }
    else {
     for (byte i = 0; i < histLen; i++) {
      if (history[i] == -1) {
       history[i] = curPulse;
       break;
      }
     }
    }

    /* if all 20 values in history are close to each other, not far from lowest, & are not -1, then the muscles are relaxed & break out of the while loop */
    if (history[histLen-1] != -1) {
     int sum = 0;
     for (byte i = 0; i < histLen; i++) {
      sum += history[i];
     }
     int avg = sum / histLen;
     int diff = 0;
     for (byte i = 0; i < histLen; i++) {
      diff += abs(history[i] - avg);
     }
     if (diff < 100 && avg < lowest + 100) {
      break;
     }
    }
   }
   precurPulse = curPulse;

   /* uncurl */
   faceupServo.write(180);
   facedownServo.write(0);
  }
  timer--;
 }
 else {
  activationEnergy = 0;
  timer--;
  precurPulse = curPulse;
 }
 delay(25);
}
