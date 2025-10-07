#include <stdio.h>

#define COLONNE 2
#define NBLIGNE 2

int initValTab2D(int tableau[][COLONNE], int nbligne, int nbColonne, int nbEntier);

int TestInitValTab2D();

/***************************************************/

void main(void) {

    int tableau[NBLIGNE][COLONNE];

    TestInitValTab2D();

}

/***************************************************/

int initValTab2D(int tableau[][COLONNE], int nbligne, int nbColonne, int nbEntier) {


    int i;
    int j;

    for (i=0;i<nbligne;i++) {

        for (j=0;j<nbColonne;j++) {

            tableau[i][j] = nbEntier;

            printf("tableau[%d][%d] = %d \n", i, j, tableau[i][j]);
        }
    }


    return tableau[i][j] ;
}

int TestInitValTab2D() {

    int tableau[NBLIGNE][COLONNE] = {0};

    initValTab2D(tableau[NBLIGNE],NBLIGNE,COLONNE,4);


}


/***************************************************/