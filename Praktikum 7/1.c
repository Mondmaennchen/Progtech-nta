#include <stdio.h>

int main() {
    // Definieren Sie die Variable für die Note
    int note;

    // Lesen Sie die Note ein und verarbeiten Sie die Daten in einer endlosen Schleife
    while (1) {
        printf("Geben Sie die Note ein (1-6, -1 zum Beenden): ");
        scanf("%d", &note);

        // Überprüfen Sie, ob die Note gültig ist, und geben Sie sie in Worten aus
        if (note == -1) {
            printf("Programm wird beendet.\n");
            return 0;
        } else if (note >= 1 && note <= 6) {
            switch (note) {
                case 1:
                    printf("Die Note ist: ungenügend\n");
                    break;
                case 2:
                    printf("Die Note ist: mangelhaft\n");
                    break;
                case 3:
                    printf("Die Note ist: ausreichend\n");
                    break;
                case 4:
                    printf("Die Note ist: befriedigend\n");
                    break;
                case 5:
                    printf("Die Note ist: gut\n");
                    break;
                case 6:
                    printf("Die Note ist: sehr gut\n");
                    break;
            }
        } else {
            printf("Ungültige Note, bitte versuchen Sie es erneut.\n");
        }
    }

    return 0;
}
