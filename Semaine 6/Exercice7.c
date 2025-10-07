#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 40

int estPalindrome (unsigned char chaine[]);

int main(void) {
    int reponse;

    char chaine[TAILLE_TAB] = "été";

    reponse = estPalindrome(chaine);

    printf("%d", reponse);
}

int estPalindrome (unsigned char chaine[]) {

    // copier l'inverse du palindrome, copier l'original et l'inverse.

   unsigned char inversechaine[TAILLE_TAB];
    int i = 0;
    int nbChar = 0;

    while (chaine[nbChar] != '\0') {
        nbChar++;
    }

    printf("nbChar =  %d\n", nbChar);

    while (chaine[i] != '\0') {
        inversechaine[i] = chaine[nbChar-1];
        nbChar--;
        i++;
    }

    printf("inverse = %s\n", inversechaine);

    i = 0;

    while (chaine[i] != '\0') {
        if (chaine[i] != inversechaine[i]) {
            return 0;

        }
        i++;

    }
    return 1;

}


