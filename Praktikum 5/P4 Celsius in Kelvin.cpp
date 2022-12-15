#include <stdio.h>
#include <stdlib.h>

int main()
{
int lower=0;
int upper=300;
int step=20;
	float i=lower;
		do
		{
			i=i+step;
			float K= i+273.15;
			printf("%.2f Celsius = %.2f Kelvin\n",i,K);
		}while (i < upper);
}

