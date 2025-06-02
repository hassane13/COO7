// Exo1 : Remplacer toutes les occurrences d'un caractère
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char oldChar, newChar;

    // Lecture de la chaîne
    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);

    // Supprimer le \n de fin si présent
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Lecture des caractères
    printf("Caractère à remplacer : ");
    scanf(" %c", &oldChar);
    printf("Caractère de remplacement : ");
    scanf(" %c", &newChar);

    // Parcours de la chaîne et remplacement
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }

    printf("Résultat : %s\n", str);
    return 0;
}
