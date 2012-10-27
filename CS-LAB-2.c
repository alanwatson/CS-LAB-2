Program Description: In this program we inputed the values of the incline angle, launch angle and initial velocity. Then we calculated the reentry point and the maximum height based off the input values.

#include<stdio.h>
#include<math.h>
#define GRAVITY 32.1740486053 
int main()
{
 //Local Variables
 float iangle; //incline angle
 float langle; //launch angle
 float ivelocity; //inital velocity
 float yivelocity; //inital y velocity
 float yheight; //maximum height
 float or; //distance from point o to the reentry point
 float yreentry; //y value of the reentry point
 float xreentry; //x value of the reentry point


 //Statements
 printf("Input the angle the inclined plane in degrees:  ");
 scanf("%f",&iangle);
 printf("Input the initial launch angle in degrees:      ");
 scanf("%f",&langle);
 printf("Input the initial velocity in feet per second:  ");
 scanf("%f",&ivelocity);

 langle = langle * (M_PI / 180); //changes the launch angle from degrees to radians
 iangle = iangle * (M_PI / 180); //changes the incline angle from degrees to radians
 or = ((2 * (ivelocity * ivelocity) * ((cos(langle)) * (cos(langle)))) / (GRAVITY * cos(iangle))) * (tan(langle) - tan(iangle));

 yreentry = sin(iangle) * or;
 xreentry = cos(iangle) * or;
 yivelocity = ivelocity * sin(langle);
 yheight = ((yivelocity * yivelocity) / 2) / GRAVITY;

 printf("\nThe reentry point is at (%.5f, %.5f) \n",xreentry,yreentry);
 printf("The maximum height reached was %.5f feet.\n",yheight);

 return(0);
}

