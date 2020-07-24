#include <Servo.h>

Servo Name;
int pos = 0;

void setup() {

  
 Name.attach(16);
 
}

void loop(){
  
   for (pos = 0; pos < 180; pos += 1){
    Name.write(pos);
    delay(1);
  }
  for (pos = 180; pos>=1; pos -= 1){
    Name.write(pos);
    delay(1);
  }
  
   
}
