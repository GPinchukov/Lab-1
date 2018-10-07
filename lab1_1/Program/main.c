#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <locale.h> 


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)  {
 float x ;
printf("Enter x: ");
 scanf("%f",&x);
 x=pow(x,3)*4;
 printf("solution of equation: %.2f",x); 
 return 0;
}

