#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)  {
 float x, y, z, s;
 printf("Enter x: ");
 scanf("%f",&x);
printf("Enter y: ");
 scanf("%f",&y);
 printf("Enter z: ");
 scanf("%f",&z);
 
 s=pow((fabs(cos(x)-cos(y))), ((pow(sin(y),2))*2+1))*(z*z/2+z*z*z/3 + z*z*z*z/4+z + 1);
 printf("solution of equation: %f",s); 
 return 0;
}
