#include <stdio.h>

int main() {
    // Definieren Sie die Variablen für Jahr und Monat
    int jahr, monat;

    // Lesen Sie Jahr und Monat ein und verarbeiten Sie die Daten in einer endlosen Schleife
    while (1) {
        printf("Geben Sie das Jahr ein: ");
        scanf("%d", &jahr);
        printf("Geben Sie den Monat ein (1-12): ");
        scanf("%d", &monat);

        // Berechnen Sie die Anzahl der Tage im Monat anhand der eingegebenen Jahres- und Monatsangabe
        int anzahlTage;
        switch (monat) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                anzahlTage = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                anzahlTage = 30;
                break;
            case 2:
                if (jahr % 4 == 0) {
                    anzahlTage = 29;
                } else {
                    anzahlTage = 28;
                }
                break;
            default:
                printf("Ungültige Monatsangabe, beende Programm.\n");
                return 0;
        }

        // Geben Sie das Ergebnis aus
        printf("Der Monat %d im Jahr %d hat %d Tage.\n", monat, jahr, anzahlTage);
    }

    return 0;
}
