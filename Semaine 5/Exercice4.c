#include <stdio.h>

#define COLONNE 5
#define NBLIGNE 3

double moyenne2D(int tableau[][COLONNE], int nbligne, int nbColonne) ;

void testmoyenne2D();

/***************************************************/

void main(void) {

    testmoyenne2D();

}

/***************************************************/

double moyenne2D(int tableau[][COLONNE], int nbligne, int nbColonne) {

double moyenne = 0;

    int i;
    int j;

    for (i=0;i<nbligne;i++) {

        for (j=0;j<nbColonne;j++) {

            moyenne += tableau[i][j];

            printf("tableau[%d][%d] = %lf\n", i, j, moyenne);
        }
    }

    moyenne /= (nbligne*nbColonne);
    return moyenne;
}

void testmoyenne2D() {

    double moyenne;

    int tableau[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};

     moyenne=moyenne2D(tableau,NBLIGNE,COLONNE);

    printf("moyennee = %lf",moyenne);

}

/***************************************************/