# 1 "C:\\Users\\soope\\Desktop\\Visual Studio Code\\Hackathon 2024\\ESP32\\ESP32.ino"




int step_number = 0;
void setup() {
  pinMode(13, 0x03);
  pinMode(12, 0x03);
  pinMode(14, 0x03);
  pinMode(27, 0x03);
}

void loop() {
  digitalWrite(27, 0x1);

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
  digitalWrite(13, 0x1);
  digitalWrite(12, 0x0);
  digitalWrite(14, 0x0);
  digitalWrite(27, 0x0);
  break;
  case 1:
  digitalWrite(13, 0x0);
  digitalWrite(12, 0x1);
  digitalWrite(14, 0x0);
  digitalWrite(27, 0x0);
  break;
  case 2:
  digitalWrite(13, 0x0);
  digitalWrite(12, 0x0);
  digitalWrite(14, 0x1);
  digitalWrite(27, 0x0);
  break;
  case 3:
  digitalWrite(13, 0x0);
  digitalWrite(12, 0x0);
  digitalWrite(14, 0x0);
  digitalWrite(27, 0x1);
  break;
}
  }else{
    switch(step_number){
  case 0:
  digitalWrite(13, 0x0);
  digitalWrite(12, 0x0);
  digitalWrite(14, 0x0);
  digitalWrite(27, 0x1);
  break;
  case 1:
  digitalWrite(13, 0x0);
  digitalWrite(12, 0x0);
  digitalWrite(14, 0x1);
  digitalWrite(27, 0x0);
  break;
  case 2:
  digitalWrite(13, 0x0);
  digitalWrite(12, 0x1);
  digitalWrite(14, 0x0);
  digitalWrite(27, 0x0);
  break;
  case 3:
  digitalWrite(13, 0x1);
  digitalWrite(12, 0x0);
  digitalWrite(14, 0x0);
  digitalWrite(27, 0x0);


}
  }
step_number++;
  if(step_number > 3){
    step_number = 0;
  }
}
