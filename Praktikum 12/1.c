#include <stdio.h>
#include <string.h>

int main() {
  char array[9];  // Char-Array mit 9 Elementen

  printf("Bitte geben Sie einen String ein: ");
  scanf("%s", array);  // Einlesen des Strings in das Array

  int length = strlen(array);  // Berechnen der Länge des Strings

  printf("Die Länge des eingelesenen Strings ist: %d\n", length);

  return 0;
}