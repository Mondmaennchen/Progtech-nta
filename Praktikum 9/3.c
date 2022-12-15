#include <stdio.h>

int main(void)
{
    // Größen von verschiedenen Datentypen ausgeben
    printf("Größe des char-Datentyps: %zu\n", sizeof(char));
    printf("Größe des bool-Datentyps: %zu\n", sizeof(bool));
    printf("Größe des short-Datentyps: %zu\n", sizeof(short));
    printf("Größe des unsigned short-Datentyps: %zu\n", sizeof(unsigned short));
    printf("Größe des int-Datentyps: %zu\n", sizeof(int));
    printf("Größe des unsigned int-Datentyps: %zu\n", sizeof(unsigned int));
    printf("Größe des long-Datentyps: %zu\n", sizeof(long));
    printf("Größe des unsigned long-Datentyps: %zu\n", sizeof(unsigned long));
    printf("Größe des long long-Datentyps: %zu\n", sizeof(long long));
    printf("Größe des float-Datentyps: %zu\n", sizeof(float));
    printf("Größe des double-Datentyps: %zu\n", sizeof(double));
    printf("Größe des long double-Datentyps: %zu\n", sizeof(long double));
    printf("Größe des void-Datentyps: %zu\n", sizeof(void));

    // Array mit den Zahlen von 0 bis 9 definieren
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Größe des Arrays ausgeben
    printf("Größe des Arrays: %zu\n", sizeof(arr));

    return 0;
}
