#include <stdio.h>
#include <stdlib.h>

int main() 
{
float dm;            
   printf("Bitte geben Sie ihren Betrag in DM ein :");
   scanf("%f",&dm);
float euro= dm/1.9583;
	printf("%f DM sind %f EURO",dm,euro);
}
