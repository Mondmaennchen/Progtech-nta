#include <stdio.h>
#include <stdlib.h>

int main()
{
int lower=0;
int upper=300;
int step=20;
int i;
	for(i=lower;i<=upper;i+=step)
	{
	int F=i*1.8 + 32;
	printf("%d Grad Celsius = %d Grad Fahrenheit\n" ,i,F);}

}
