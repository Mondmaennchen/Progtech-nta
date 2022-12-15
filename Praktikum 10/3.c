#include <stdio.h>
#include <string.h>

int main(void)
{
    // Char-Array mit 11 Elementen
    char str[11];

    // Array mit dem String "Hallo Welt" initialisieren
    strcpy(str, "Hallo Welt");

    // String mit printf ausgeben
    printf("Ausgabe des Strings in 1): %s\n", str);

    // Leerzeichen zwischen o und W durch NULL-Zeichen ersetzen
    str[6] = '\0';

    // String mit printf ausgeben
    printf("Ausgabe des Strings in 3): %s\n", str);

    // Kompletten Inhalt des Arrays mit printf und for-Schleife ausgeben
    printf("Ausgabe des Strings in 4): ");
    for (int i = 0; i < 11; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
