#include <stdio.h>

int main(void)
{
    // Array definieren
    int arr[] ={0,1,2,3,4,5,6,7,8,9};

    // Zeiger vom Typ int anlegen und auf das erste Element von arr zeigen lassen
    int *p = &arr[0];

    // Inhalte von arr über den Zeiger ausgeben
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d\n", i, *p);
        p++;
    }

    // Zeiger auf das letzte Element von arr zeigen lassen
    p = &arr[9];

    // Inhalte von arr rückwärts über den Zeiger ausgeben
    for (int i = 9; i >= 0; i--)
    {
        printf("arr[%d] = %d\n", i, *p);
        p--;
    }

    return 0;
}
