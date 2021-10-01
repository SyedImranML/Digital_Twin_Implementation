#include <Servo.h>
Servo first_axis, second_axis, third_axis,fourth_axis;
int pos_first_axis = 90;    // variable to store the servo position
int pos_second_axis = 90;
int pos_third_axis = 90;
int pos_fourth_axis = 90;
void setup() {
  delay(2000); 
  first_axis.attach(3);  
  first_axis.write(90); //inc rotates left means ccw             
    delay(2000); 
   second_axis.attach(4);  
  second_axis.write(120);  //inc pushes up means cw            
    delay(2000); 
     third_axis.attach(5);  
  third_axis.write(175); //inc moves up means cw             
    delay(2000); 
     fourth_axis.attach(6);  
  fourth_axis.write(90); //inc moves down means ccw             
    delay(2000);  
function1();
function3();
}
void function1(void)
{
for (pos_first_axis = 90; pos_first_axis <= 180; pos_first_axis += 1)  
    {
    first_axis.write(pos_first_axis);              
    delay(15);    
  }
for (pos_first_axis = 180; pos_first_axis >= 90; pos_first_axis -= 1)  
    {
    first_axis.write(pos_first_axis);              
    delay(15);    
}
}
