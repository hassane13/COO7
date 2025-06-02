// Exo5 : Compter le nombre de mots dans une chaîne
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0, inWord = 0, count = 0;

    // Lecture de la chaîne (avec espaces)
    printf("Entrez une phrase : ");
    fgets(str, sizeof(str), stdin);

    // Comptage des mots
    while (str[i] != '\0') {
        if (!isspace(str[i]) && inWord == 0) {
            inWord = 1;
            count++;
        } else if (isspace(str[i])) {
            inWord = 0;
        }
        i++;
    }

    printf("Nombre de mots : %d\n", count);
    return 0;
}
