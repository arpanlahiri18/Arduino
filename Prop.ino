void setup() {
  Serial.begin(9600);

}

void you()
{
  for(int d = 0 ; d< 25;d++)
 Serial.println(1.5*pow(-1,d)); 
  for(int d = 0 ; d< 50;d++)
 Serial.println(0.20*pow(-1,d) - 1.15);
 for(int d = 0 ; d< 25;d++)
 Serial.println(1.5*pow(-1,d));
  
  for(int d = 0;d<500;d++)
 {
  Serial.println(0);
  }
  
  }

void love()
{
 for(int m =1;m<3;m++)
  {for(int d = 60; d < 120; d++){
    Serial.println((2*sin(DEG_TO_RAD * d))-(sin(DEG_TO_RAD * 60)));
    
    if (m==1)
    Serial.println((-1*0.02*d)+(sin(DEG_TO_RAD * 120)));
    else
    Serial.println((-1*0.02*(120-d))-(sin(DEG_TO_RAD * 15)));
    
    delay(20);
    
    
  } 
   
  }

for(int d = 0;d<50;d++)
 {
  Serial.println(0);
  }
  
  }

void eye()
{
  for(int d = 0 ; d< 25;d++)
 Serial.println(1.5*pow(-1,d));

for(int d = 0;d<50;d++)
 {
  Serial.println(0);
  }

  }


void loop() {
eye();
delay(1000);
love();
delay(1000);
you();
delay(1000);
}
