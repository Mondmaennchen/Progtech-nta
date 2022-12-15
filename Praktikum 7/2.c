#include <stdio.h>

int main() {
    // Definieren Sie die Variablen für die aktuelle Zeile und Spalte
    int zeile, spalte;

    // Verarbeiten Sie die Daten in zwei verschachtelten for-Schleifen
    for (zeile = 1; zeile <= 8; zeile++) {
        for (spalte = 1; spalte <= 8; spalte++) {
            // Berechnen Sie die Bezeichnung des Feldes anhand der aktuellen Zeile und Spalte
            char bezeichnung;
            if (zeile % 2 == 0) {
                if (spalte % 2 == 0) {
                    bezeichnung = 'W';
                } else {
                    bezeichnung = 'S';
                }
            } else {
                if (spalte % 2 == 0) {
                    bezeichnung = 'S';
                } else {
                    bezeichnung = 'W';
                }
            }

            // Geben Sie die Bezeichnung des Feldes aus
            printf("%c ", bezeichnung);
        }
        printf("\n");
    }

    return 0;
}
