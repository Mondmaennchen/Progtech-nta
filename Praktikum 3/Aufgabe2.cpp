#include <stdio.h>
#include <stdlib.h>
int main() {
int a;
printf("geben sie eine Zahl ein:");
scanf("%d",&a);

int b;
printf("\ngeben sie die zu vergleichende Zahl ein:");
scanf("%d",&b);
if(a==b)
    printf("\n%d ist gleich groﬂ wie %d",a,b);
else
	printf("\n%d ist Groesser als %d",a,b);
else
	printf("\n%d ist Groesser als %d",b,a);


return 0;

}
