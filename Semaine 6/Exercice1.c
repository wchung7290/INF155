#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 10

int chaineTexte (unsigned char chaine[]);
int main(void) {

     int resultat;
     char chaine [TAILLE_TAB] = "testingg";

     resultat = chaineTexte(chaine);

     printf("resultat = %d\n", resultat);

}

int chaineTexte (unsigned char chaine[]) {

     int i = 0;

     while (chaine[i] != '\0') {

          if (isdigit(chaine[i])) {

               return 0;
          }
          i++;
     }


     return 1;

}