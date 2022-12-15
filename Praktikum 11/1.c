#include <stdio.h>

int main(void)
{
    // Char-Array mit 11 Elementen
    char str[11] = "Ein Nenner";

    // Buchstaben 'E' und 'N' in 'e' bzw. 'n' umwandeln
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'E')
        {
            str[i] = 'e';
        }
        else if (str[i] == 'N')
        {
            str[i] = 'n';
        }
    }

    // Geänderte Zeichenkette vorwärts ausgeben
    printf("Zeichenkette vorwärts: ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    // Geänderte Zeichenkette rückwärts ausgeben
    printf("Zeichenkette rückwärts: ");
    for (int i = 10; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
