#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
for(i = 1; i <= 9; i = i + 1) { 
    for(j = 1; j <= 9; j = j + 1){
    int ij= j*i;
printf("%dx%d=%d ", i, j, ij);
if(ij<=9)
{
    printf(" ");
}
if(j==9)
{
    printf("\n");
}



}
}
}