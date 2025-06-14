// Exo2 : Concaténer deux chaînes sans utiliser strcat
#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    // Lecture des deux chaînes
    printf("Chaîne 1 : ");
    scanf("%s", str1);
    printf("Chaîne 2 : ");
    scanf("%s", str2);

    // Copier str1 dans result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Ajouter str2 à la suite
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0'; // Fin de chaîne

    printf("Chaîne concaténée : %s\n", result);
    return 0;
}
