// Exo4 : Vérifier si une chaîne est un palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int debut = 0, fin, palindrome = 1;

    // Lecture de la chaîne
    printf("Entrez une chaîne : ");
    scanf("%s", str);

    // Calcul de la fin
    fin = strlen(str) - 1;

    // Comparaison des caractères depuis les extrémités
    while (debut < fin) {
        if (str[debut] != str[fin]) {
            palindrome = 0;
            break;
        }
        debut++;
        fin--;
    }

    // Affichage du résultat
    if (palindrome) {
        printf("La chaîne est un palindrome.\n");
    } else {
        printf("La chaîne n'est pas un palindrome.\n");
    }

    return 0;
}
