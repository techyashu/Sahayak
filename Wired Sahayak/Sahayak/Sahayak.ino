#include <Wire.h>
#include <I2Cdev.h>
#include <MPU6050.h>
#include <Mouse.h>

MPU6050 mpu;
int16_t ax, ay, az, gx, gy, gz;
int vx, vy;




void setup() 
{
  pinMode(A0, INPUT);

  Serial.begin(9600);
  Wire.begin();
  Mouse.begin();
  mpu.initialize();
  
        if (!mpu.testConnection()) 
        {
          while (1);
        }

}


void loop() 
{
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  vx = (gx - 200) / 200;  
  vy = -(gz - 200) / 200; 

  int buttonState1 = analogRead(A0);
 
  if (buttonState1 >= 500) {
    Mouse.press(MOUSE_LEFT);
    delay(100);
    Mouse.release(MOUSE_LEFT);
    delay(50);
  }
  Mouse.move(vx, vy);
  delay(20);
}
