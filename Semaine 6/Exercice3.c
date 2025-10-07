#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 40

char* sectionChaine(char phrase[],int positionMin, int positionMax);

int main(void) {

        char phrase [TAILLE_TAB] = "0123456789";

        sectionChaine(phrase,0,TAILLE_TAB);
}

char* sectionChaine(char phrase[],int positionMin, int positionMax) {

        int i = 0;
        int j = 0;
        char valRet [TAILLE_TAB];

       while (phrase[i] != '\0') {

                if (i >= positionMin && i <= positionMax) {

                        valRet[j] = phrase[i];

                        j++;
                }
               i++;
        }
        printf("%s",valRet);
return valRet;
}


