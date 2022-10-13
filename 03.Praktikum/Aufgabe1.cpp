#include <stdio.h>
#include <stdlib.h>
int main() 
{
char S[]="Hallo";
printf("%s", S);

int a= 1;
int b=2;
printf("\n%i und %d\n" ,a,b);

double c=123.3;
printf("%e und %E und %f",c,c,c);

int d= 100;
printf("\n%o Oktal",d);

int e= 101;
printf("\n%e",e);

int f= 255;
printf("\n%x oder %X (Hex fuer 255)",f,f);

int g= 77;
printf("\n%i%%",g);

}
