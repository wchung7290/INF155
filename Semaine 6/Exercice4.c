#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 40

void courrielleAnom (char addresse [], char nomPrenom []);

int main(void) {

    char addresse [TAILLE_TAB] = "william.chung.@outlook.fr";
    char nomPrenom [TAILLE_TAB];

    courrielleAnom(addresse,nomPrenom);

    printf("%s \n",addresse);
    printf("%s",nomPrenom);

}

void courrielleAnom (char addresse [], char nomPrenom []) {

    int i = 0;

    while (addresse [i] != '\0') {
        nomPrenom [i] = addresse[i];
        i++;
    }

    i=0;

    while (nomPrenom[i] != '\0') { //permet de enlever la partie @

        if (nomPrenom [i] == '@') {
            nomPrenom [i] = '\0';
        }

        if (nomPrenom [i] == '.') {
            nomPrenom [i] = ' ';
        }

        if ((islower(nomPrenom[i]) && isblank(nomPrenom[i-1])) || islower(nomPrenom[0]) ) {
            nomPrenom [i] = toupper(nomPrenom[i]);
        }
        i++;

    }
}

