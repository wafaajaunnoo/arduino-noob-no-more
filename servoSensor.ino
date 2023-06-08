#include <Servo.h>

Servo servoMotor;   

int sensorPin = A0;   

int ledPin = 13;  

int threshold = 500;  

void setup() {

  pinMode(ledPin, OUTPUT);  

  servoMotor.attach(9);  

}

void loop() {

  int sensorValue = analogRead(sensorPin);    

  if (sensorValue > threshold) {

    digitalWrite(ledPin, HIGH);  

    servoMotor.write(90);  

    delay(1000);  

    servoMotor.write(0);  

    delay(1000);  // Wait for 1 second

  } else {

    digitalWrite(ledPin, LOW);  // Turn off the LED

  }

}

