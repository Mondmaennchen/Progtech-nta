#include <stdio.h>
#include <stdlib.h>

int main()
{
int lower=0;
int upper=300;
int step=20;
	int i=lower;
		while(i < upper) 
		{
			i=i+step;
			int F=(i-32)*5/9;
			printf("%d Fahrenheit = %d Celsius\n",i,F);
		}
}

