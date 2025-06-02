#include <stdio.h>

int main() {
    char str[100], oldChar, newChar;
    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);
    
    printf("Caractère à remplacer : ");
    scanf(" %c", &oldChar);
    
    printf("Caractère de remplacement : ");
    scanf(" %c", &newChar);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar)
            str[i] = newChar;
    }

    printf("Résultat : %s", str);
    return 0;
}
