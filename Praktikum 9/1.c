#include <stdio.h>

int main(void)
{
    // Array definieren und initialisieren
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Zeiger vom Typ int definieren und auf das erste Element von arr zeigen lassen
    int *p = arr;

    // Inhalte von arr über den Zeiger ausgeben
    printf("Inhalte von arr (vorwärts): ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

    // Zeiger auf das letzte Element von arr zeigen lassen
    p = arr + 9;

    // Inhalte von arr über den Zeiger rückwärts ausgeben
    printf("Inhalte von arr (rückwärts): ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *p);
        p--;
    }
    printf("\n");

    return 0;
}
