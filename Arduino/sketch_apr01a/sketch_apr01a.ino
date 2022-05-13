//Pin declaration
int RightEn = 10;
//int RightDir = 4;
int LeftEn = 11;
//int LeftDir = 7;
int LeftSen = 2;
int LeftMSen = 3;
int MidSen1 = 4;
int MidSen2 = 5;
int RightMSen = 6;
int RightSen = 7;

void setup()
{
  //Motor Driver Pin Setup
  pinMode(RightEn,OUTPUT);
  //pinMode(RightDir,OUTPUT);
  pinMode(LeftEn,OUTPUT);
 // pinMode(LeftDir,OUTPUT);
  
  //digitalWrite(RightDir,HIGH);
 // digitalWrite(LeftDir,LOW);
  
  //LSS05 Auto-Calibrating Line Sensor Pin Setup
  pinMode(LeftSen,INPUT);
  pinMode(LeftMSen,INPUT);
  pinMode(MidSen1,INPUT);
  pinMode(MidSen2,INPUT);
  pinMode(RightMSen,INPUT);
  pinMode(RightSen,INPUT);
}

void loop()
{
  if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==0)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==0)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 100);   //PWM Speed Control
    analogWrite(LeftEn, 100);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==1)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==0)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 100);   //PWM Speed Control
    analogWrite(LeftEn, 30);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==1)&&(digitalRead(LeftMSen)==1)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==0)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 100);   //PWM Speed Control
    analogWrite(LeftEn, 0);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==1)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==0)&&(digitalRead(RightMSen)==0)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 100);   //PWM Speed Control
    analogWrite(LeftEn, 30);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==1)&&(digitalRead(LeftMSen)==1)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==0)&&(digitalRead(RightMSen)==0)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 100);   //PWM Speed Control
    analogWrite(LeftEn, 0);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==0)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==1)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 50);   //PWM Speed Control
    analogWrite(LeftEn, 100);   //PWM Speed Control
  }
   else if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==0)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==1)&&(digitalRead(RightSen)==1))
  {
    analogWrite(RightEn, 0);   //PWM Speed Control
    analogWrite(LeftEn, 100);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==0)&&(digitalRead(MidSen1)==0)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==1)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 30);   //PWM Speed Control
    analogWrite(LeftEn, 100);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==0)&&(digitalRead(MidSen1)==0)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==1)&&(digitalRead(RightSen)==1))
  {
    analogWrite(RightEn, 0);   //PWM Speed Control
    analogWrite(LeftEn, 100);   //PWM Speed Control
  }
  
else if((digitalRead(LeftSen)==1)&&(digitalRead(LeftMSen)==1)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==1)&&(digitalRead(RightSen)==1))
  {
    analogWrite(RightEn, 0);   //PWM Speed Control
    analogWrite(LeftEn, 100);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==1)&&(digitalRead(LeftMSen)==0)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==0)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 100);   //PWM Speed Control
    analogWrite(LeftEn, 0);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==1)&&(digitalRead(LeftMSen)==1)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==1)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 100);   //PWM Speed Control
    analogWrite(LeftEn, 0);   //PWM Speed Control
  }
  else if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==1)&&(digitalRead(MidSen1)==1)&&(digitalRead(MidSen2)==1)&&(digitalRead(RightMSen)==1)&&(digitalRead(RightSen)==1))
  {
    analogWrite(RightEn, 0);   //PWM Speed Control
    analogWrite(LeftEn, 100);   //PWM Speed Control
  }
    else if((digitalRead(LeftSen)==0)&&(digitalRead(LeftMSen)==0)&&(digitalRead(MidSen1)==0)&&(digitalRead(MidSen2)==0)&&(digitalRead(RightMSen)==0)&&(digitalRead(RightSen)==0))
  {
    analogWrite(RightEn, 0);   //PWM Speed Control
    analogWrite(LeftEn, 100);   //PWM Speed Control
  }
  }
