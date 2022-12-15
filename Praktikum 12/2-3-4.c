#include <stdio.h>

int main(void)
{
    // Variablen vom Typ int, double und char definieren und initialisieren
    int i = 7;
    double d = 3.14;
    char c = 'a';

    // Zeiger vom Typ int, double und char definieren und auf die Variablen zeigen
    int *pi = &i;
    double *pd = &d;
    char *pc = &c;

    // Werte der Variablen über die Zeiger ausgeben
    printf("int-Variable: %d\n", *pi);
    printf("double-Variable: %f\n", *pd);
    printf("char-Variable: %c\n", *pc);

    // Adressen der Variablen ausgeben
    printf("Adresse der int-Variable: %p\n", pi);
    printf("Adresse der double-Variable: %p\n", pd);
    printf("Adresse der char-Variable: %p\n", pc);

    // Zeiger vom Typ int ohne Zuweisung anlegen
    int *p = NULL;

    // Ausgabe des uninitialisierten Zeigers
    printf("Wert des uninitialisierten Zeigers: %p\n", p);

    // Zeiger den NULL-Wert zuweisen
    p = NULL;

    // Ausgabe des NULL-Zeigers
    printf("Wert des NULL-Zeigers: %p\n", p);

    // Werte der Variablen über die Zeiger ändern
    *pi = 10;
    *pd = 2.71;
    *pc = 'b';

    // Geänderte Werte über die Zeiger ausgeben
    printf("Neuer Wert der int-Variable: %d\n", *pi);
    printf("Neuer Wert der double-Variable: %f\n", *pd);
    printf("Neuer Wert der char-Variable: %c\n", *pc);

    // Werte der Variablen über die Variablennamen ändern
    i = 15;
    d = 6.28;
    c = 'c';

    // Geänderte Werte über die Zeiger ausgeben
    printf("Neuer Wert der int-Variable: %d\n", *pi);
    printf("Neuer Wert der double-Variable: %f\n", *pd);
    printf("Neuer Wert der char-Variable: %c\n", *pc);

    return 0;
}
S