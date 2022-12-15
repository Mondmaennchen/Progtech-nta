#include <stdio.h>

int main(void)
{
    // Zweidimensionales Array mit 3 Zeilen und 2 Spalten
    double arr[3][2];

    // Kommazahlen einlesen und im Array speichern
    printf("Bitte geben Sie 6 Kommazahlen ein:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }

    // Gespeicherte Zahlen mit den Array-Indexen ausgeben
    printf("Gespeicherte Zahlen im Array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr[%d][%d] = %lf\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
