#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0, end, palindrome = 1;

    printf("Entrez une chaîne : ");
    scanf("%s", str);

    end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (palindrome)
        printf("La chaîne est un palindrome.\n");
    else
        printf("La chaîne n'est pas un palindrome.\n");

    return 0;
}
