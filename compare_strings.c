// Exo3 : Comparer deux chaînes sans strcmp
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, identique = 1;

    // Lecture des deux chaînes
    printf("Chaîne 1 : ");
    scanf("%s", str1);
    printf("Chaîne 2 : ");
    scanf("%s", str2);

    // Comparaison caractère par caractère
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            identique = 0;
            break;
        }
        i++;
    }

    // Résultat
    if (identique) {
        printf("Les chaînes sont identiques.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}
