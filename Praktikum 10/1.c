#include <stdio.h>

int main(void)
{
    // Array mit Anzahl der Tage pro Monat
    int monat_tage[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Eingabe des Monats
    int monat;
    printf("Bitte geben Sie den Monat (1-12) ein: ");
    scanf("%d", &monat);

    // Anzahl der Tage im Monat ausgeben
    printf("Anzahl der Tage im Monat %d: %d\n", monat, monat_tage[monat - 1]);

    return 0;
}
