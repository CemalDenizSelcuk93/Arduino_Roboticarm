#include <Servo.h>


Servo servomotor1;
Servo servomotor2;
Servo servomotor3;
Servo servomotor4;
int byteRead;
int deger1;
int deger21;
int deger31;
int deger41;
int deger2;
int deger3;
int deger4;
int A;
int K;
int i;
void setup() {
  Serial.begin(9600);
servomotor1.attach(6);
servomotor2.attach(9);
servomotor3.attach(10);
servomotor4.attach(11);
delay(25);
  servomotor1.write(90);
  Serial.print("GRIPPER ACIK:");
  delay(25);
  deger3=40;
  while(deger31<deger3){
  delay(25);
  deger31=deger31+1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3); 
  }
  while(deger31>deger3){
  delay(25);
  deger31=deger31-1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3);
  }
  
  delay(25);    
  deger4=165;
  while(deger41<deger4){
  delay(25);
  deger41=deger41+1;
  servomotor4.write(deger41);
  Serial.print("Deger4:");
  Serial.println(deger4);
  Serial.println();
  Serial.println();
  }
  while(deger41>deger4){
  delay(25);
  deger41=deger41-1;
  servomotor4.write(deger41);
  Serial.print("Deger4:");
  Serial.println(deger4);
  Serial.println();
  Serial.println();
  }
   delay(25);
  deger3=81;
  while(deger31<deger3){
  delay(25);
  deger31=deger31+1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3); 
  }
  while(deger31>deger3){
  delay(25);
  deger31=deger31-1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3);
  }
 
   deger2=75;
  while(deger21<deger2){
  delay(25);
  deger21=deger21 + 1;
  servomotor2.write(deger21);
  Serial.print("Deger2:");
  Serial.println(deger2);
  }
  while(deger21>deger2){
  delay(25);
  deger21=deger21 - 1;
  servomotor2.write(deger21);
  Serial.print("Deger2:");
  Serial.println(deger2);
  }
  

  
  delay(25);
  

}



void loop() {

for(i=0;i<25;i++){
  delay(25);
  servomotor1.write(8);
  Serial.println("GRIPPER KAPALI:");
   delay(25);
     deger2=148;
  while(deger21<deger2){
  delay(25);
  deger21=deger21 + 1;
  servomotor2.write(deger21);
  Serial.print("Deger2:");
  Serial.println(deger2);
  }
  while(deger21>deger2){
  delay(25);
  deger21=deger21 - 1;
  servomotor2.write(deger21);
  Serial.print("Deger2:");
  Serial.println(deger2);
  }
  delay(25);
  deger3=40;
  while(deger31<deger3){
  delay(25);
  deger31=deger31+1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3); 
  }
  while(deger31>deger3){
  delay(25);
  deger31=deger31-1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3);
  }
    deger4=64;
  while(deger41<deger4){
  delay(25);
  deger41=deger41+1;
  servomotor4.write(deger41);
  Serial.print("Deger4:");
  Serial.println(deger4);
  Serial.println();
  Serial.println();
  }
  while(deger41>deger4){
  delay(25);
  deger41=deger41-1;
  servomotor4.write(deger41);
  Serial.print("Deger4:");
  Serial.println(deger4);
  Serial.println();
  Serial.println();
  }

 
  delay(25);
  deger3=80;
  while(deger31<deger3){
  delay(25);
  deger31=deger31+1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3); 
  }
  while(deger31>deger3){
  delay(25);
  deger31=deger31-1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3);
  }
  delay(25);

  deger2=142;
  
  while(deger21<deger2){
  delay(25);
  deger21=deger21 + 1;
  servomotor2.write(deger21);
  Serial.print("Deger2:");
  Serial.println(deger2);
  }
  while(deger21>deger2){
  delay(25);
  deger21=deger21 - 1;
  servomotor2.write(deger21);
  Serial.print("Deger2:");
  Serial.println(deger2);
  }
 
  servomotor1.write(90);
  Serial.print("GRIPPER ACIK:");
delay(25);
  deger3=40;
  while(deger31<deger3){
  delay(25);
  deger31=deger31+1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3); 
  }
  while(deger31>deger3){
  delay(25);
  deger31=deger31-1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3);
  }
  
  delay(25);    
  deger4=165;
  while(deger41<deger4){
  delay(25);
  deger41=deger41+1;
  servomotor4.write(deger41);
  Serial.print("Deger4:");
  Serial.println(deger4);
  Serial.println();
  Serial.println();
  }
  while(deger41>deger4){
  delay(25);
  deger41=deger41-1;
  servomotor4.write(deger41);
  Serial.print("Deger4:");
  Serial.println(deger4);
  Serial.println();
  Serial.println();
  }
   delay(25);
  deger3=81;
  while(deger31<deger3){
  delay(25);
  deger31=deger31+1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3); 
  }
  while(deger31>deger3){
  delay(25);
  deger31=deger31-1;
  servomotor3.write(deger31);
  Serial.print("Deger3:");
  Serial.println(deger3);
  }
 
  
  deger2=75;
  while(deger21<deger2){
  delay(25);
  deger21=deger21 + 1;
  servomotor2.write(deger21);
  Serial.print("Deger2:");
  Serial.println(deger2);
  }
  while(deger21>deger2){
  delay(25);
  deger21=deger21 - 1;
  servomotor2.write(deger21);
  Serial.print("Deger2:");
  Serial.println(deger2);
  }
  

  
  delay(25);    
 }
}
