
#include <stdio.h>
#define TAILLE 5

#define TEST 0

int verifCroissant(double tableau[],int taille);

int testverifCroissant(void);

/*****************************************************/

int main(void) {

    testverifCroissant();

    return 0;
}

/*****************************************************/

int verifCroissant(double tableau[],int taille) {

    int i;
    int resultat;

    for (i=0 ; i<taille-1 ; i++) {

        if (tableau[i] < tableau [i+1]) {

            resultat = 1;
        }

        else if (tableau [i] > tableau [i+1]) {

            resultat = 0;
            return resultat;
        }
    }
return resultat;
}

int testverifCroissant(void) {

    double tableau [TAILLE] = {1,2,3,4,5};

    int resultat;

    resultat = verifCroissant(tableau,TAILLE);

    printf("resultat = %d\n",resultat);

}