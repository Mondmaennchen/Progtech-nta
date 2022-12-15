#include <stdio.h>

int main() {
    // Definieren Sie die Arrays
    char str1[9];
    char str2[9];
    char unterschiede[9];

    // Lesen Sie die beiden Strings ein
    printf("Geben Sie den ersten String ein (Länge < 9, ohne Leerzeichen): ");
    scanf("%s", str1);
    printf("Geben Sie den zweiten String ein (Länge < 9, ohne Leerzeichen): ");
    scanf("%s", str2);

    // Vergleichen Sie die beiden Strings und speichern Sie die Unterschiede im Array unterschiede
    for (int i = 0; i < 9; i++) {
        if (str1[i] != str2[i]) {
            unterschiede[i] = str2[i];
        }
    }

    // Geben Sie die Unterschiede aus
    printf("Die Unterschiede sind: ");
    for (int i = 0; i < 9; i++) {
        if (unterschiede[i] != 0) {
            printf("%c ", unterschiede[i]);
        }
    }

    return 0;
}
