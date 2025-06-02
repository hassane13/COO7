#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0, inWord = 0, count = 0;

    printf("Entrez une phrase : ");
    fgets(str, sizeof(str), stdin);

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
