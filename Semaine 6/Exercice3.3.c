#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 40

char* enMajuscule (char chaine[]);


int main(void) {


    char phrase[TAILLE_TAB] = "bob bro lol";

    enMajuscule(phrase);

    printf("%s\n", phrase);

}

char* enMajuscule (char chaine[]) {

    int i = 0;

    while (chaine[i] != '\0') {

        if (islower(chaine[0])) {
            chaine[i] = toupper(chaine[i]);
        }

        if (isblank(chaine[i])) {

            chaine[i+1] = toupper(chaine[i+1]);
        }
        i++;
    }

    return chaine;
}

