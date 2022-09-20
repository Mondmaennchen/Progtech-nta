#include <stdio.h>
#include <stdlib.h>

int main() 
{
int a;            
   printf("Zahl 1:");
   scanf("%i",&a);
int b;            
   printf("Zahl 2:");
   scanf("%i",&b);
int c;            
   printf("Zahl 3:");
   scanf("%i",&c);
float end= (a+b+c)/3.0;
printf("Mittelwert = %f",end);
return 0;
}


