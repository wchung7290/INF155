#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 40

int estPalindrome(unsigned char chaine[]);

void validerPalindrome();

int main(void) {
    validerPalindrome();
}

int estPalindrome(unsigned char chaine[]) {
    // copier l'inverse du palindrome, copier l'original et l'inverse.

    unsigned char inversechaine[TAILLE_TAB];
    int i = 0;
    int nbChar = 0;

    while (chaine[nbChar] != '\0') {
        nbChar++;
    }

    while (chaine[i] != '\0') {
        inversechaine[i] = chaine[nbChar - 1];
        nbChar--;
        i++;
    }

    i = 0;

    while (chaine[i] != '\0') {
        if (chaine[i] != inversechaine[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

void validerPalindrome() {
    unsigned char chaine[TAILLE_TAB];
    int reponse;

    printf("Ecrit moi une chaine de charactere sans accent : ");
    scanf("%s", chaine);


    if (chaine[0] != '0') {
        reponse = estPalindrome(chaine);

        while (!reponse) {
            printf("\nN'est pas un palindrome, reecrire un autre: ");
            scanf("%s", chaine);

            reponse = estPalindrome(chaine);
        }

        if (reponse == 1 && chaine[0] != '0') {
            printf("\n%s est un palindrome", chaine);
        }

        if (reponse == 1 && chaine[0] == '0') {
            printf("\n0 recu, fin du test1");
        }

    } else {
        printf("0 recu, fin du test");
    }
}
