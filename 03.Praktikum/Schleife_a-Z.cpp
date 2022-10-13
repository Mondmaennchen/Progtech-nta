#include <stdlib.h>
#include <stdio.h>

int main()
{
int a;

    for(a=65;a<=122;a++)
    {
        if(a==91)
        {
            a = 97;
        }
        printf("\n%c",a);
    }
    printf("\n");
}
