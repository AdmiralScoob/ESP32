#include <Arduino.h>
#line 1 "C:\\Users\\soope\\Desktop\\Visual Studio Code\\Hackathon 2024\\ESP32\\ESP32.ino"
#define STEPPER_PIN_1 13
#define STEPPER_PIN_2 12
#define STEPPER_PIN_3 14
#define STEPPER_PIN_4 27
int step_number = 0;
#line 6 "C:\\Users\\soope\\Desktop\\Visual Studio Code\\Hackathon 2024\\ESP32\\ESP32.ino"
void setup();
#line 13 "C:\\Users\\soope\\Desktop\\Visual Studio Code\\Hackathon 2024\\ESP32\\ESP32.ino"
void loop();
#line 28 "C:\\Users\\soope\\Desktop\\Visual Studio Code\\Hackathon 2024\\ESP32\\ESP32.ino"
void OneStep(bool dir);
#line 6 "C:\\Users\\soope\\Desktop\\Visual Studio Code\\Hackathon 2024\\ESP32\\ESP32.ino"
void setup() {
  pinMode(STEPPER_PIN_1, OUTPUT);
  pinMode(STEPPER_PIN_2, OUTPUT);
  pinMode(STEPPER_PIN_3, OUTPUT);
  pinMode(STEPPER_PIN_4, OUTPUT);
}

void loop() {
  digitalWrite(STEPPER_PIN_4, HIGH);

for(int i = 0; i <1000; i++){
  OneStep(false);
  delay(2);
  }
for(int i = 0; i <1000; i++){
  OneStep(false);
  delay(2);
  }

}


void OneStep(bool dir){
    if(dir){
switch(step_number){
  case 0:
  digitalWrite(STEPPER_PIN_1, HIGH);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 1:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, HIGH);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 2:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, HIGH);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 3:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, HIGH);
  break;
} 
  }else{
    switch(step_number){
  case 0:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, HIGH);
  break;
  case 1:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, HIGH);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 2:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, HIGH);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 3:
  digitalWrite(STEPPER_PIN_1, HIGH);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
 
  
} 
  }
step_number++;
  if(step_number > 3){
    step_number = 0;
  } 
}
