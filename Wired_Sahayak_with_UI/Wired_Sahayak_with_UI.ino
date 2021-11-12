#include <Wire.h>
#include <I2Cdev.h>
#include <MPU6050.h>
#include <Mouse.h>

MPU6050 mpu;
int16_t ax, ay, az, gx, gy, gz;
int vx, vy;

char val='R';
int flag=0;

void setup() 
{
  pinMode(A0, INPUT);

  Serial.begin(9600);
  Wire.begin();
  Mouse.begin();
  Serial.begin(9600);
  mpu.initialize();
  
        if (!mpu.testConnection()) 
        {
          while (1);
        }

}

int x(int y)
{
  return 1-y;
}

void loop() 
{
  
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  vx = (gx - 200) / 200;  
  vy = -(gz - 200) / 200; 

 int buttonState1 = analogRead(A0);
  
 if(val == 'R')
 {
  if (buttonState1 >= 500) {
    Mouse.press(MOUSE_LEFT);
    delay(100);
    Mouse.release(MOUSE_LEFT);
    delay(50);
  }
 }

 if (val == 'G')
 {
   if (buttonState1 >= 500) {
    Mouse.press(MOUSE_RIGHT);
    delay(100);
    Mouse.release(MOUSE_RIGHT);
    delay(50);
  }
 }
 
  if(val == 'B')
 {

  if (buttonState1 >= 500) {
    flag=x(flag);
    if(x(flag)==1)
    Mouse.press(MOUSE_LEFT);
    if(x(flag)==0)
    Mouse.release(MOUSE_LEFT);
    
  }

  if((val != 'R')&&(val != 'G')&&(val != 'B')) //default
  {
    val ='R';
  }
  
 }


  
  Mouse.move(vx, vy);
  delay(20);
  
  if (Serial.available()) {
     val = Serial.read();
  }
  Serial.println(val);

}
