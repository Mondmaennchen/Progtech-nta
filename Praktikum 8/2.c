#include <stdio.h>

int main() {
    // Definieren Sie die Variablen für Jahr und Monat
    int jahr, monat;

    // Lesen Sie Jahr und Monat ein und verarbeiten Sie die Daten in einer endlosen Schleife
    for (;;) {
        printf("Geben Sie das Jahr ein: ");
        scanf("%d", &jahr);
        printf("Geben Sie den Monat ein (1-12): ");
        scanf("%d", &monat);

        // Berechnen Sie die Anzahl der Tage im Monat anhand der eingegebenen Jahres- und Monatsangabe
        int anzahlTage;
        if (monat == 2) {
            if (jahr % 4 == 0) {
                anzahlTage = 29;
            } else {
                anzahlTage = 28;
            }
        } else if (monat == 1 || monat == 3 || monat == 5 || monat == 7 || monat == 8 || monat == 10 || monat == 12) {
            anzahlTage = 31;
        } else if (monat == 4 || monat == 6 || monat == 9 || monat == 11) {
            anzahlTage = 30;
        } else {
            printf("Ungültige Monatsangabe, beende Programm.\n");
            return 0;
        }

        // Geben Sie das Ergebnis aus
        printf("Der Monat %d im Jahr %d hat %d Tage.\n", monat, jahr, anzahlTage);
    }

    return 0;
}
