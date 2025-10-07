#include <stdio.h>

#define COLONNE 5
#define NBLIGNE 5

int initValTab2D(int tableau[][COLONNE], int nbligne, int nbColonne, int nbEntier);

int initBordure2D(int tableau[][COLONNE],int nbligne, int nbColonne, int nbEntier);

void TestInitValTab2D();

/***************************************************/

void main(void) {

    setbuf(stdout,0);

TestInitValTab2D();

}

/***************************************************/

int initBordure2D(int tableau[][COLONNE],int nbligne, int nbColonne, int nbEntier) {
    int i;
    int j;


    initValTab2D(tableau,nbligne,nbColonne,nbEntier);

    for(i=0;i<nbligne;i++) {
        printf("\n");
        for(j=0;j<nbColonne;j++) {
            if (i == 0 || i == nbligne - 1 || j == 0 || j == nbColonne - 1) { // Chaque condition correspond aux extremum, ex: i == nbligne -1 == position 4
                tableau[i][j] = 1;
                printf("%d ",tableau[i][j]);
            }
            else {
                tableau[i][j] = 0;
                printf("%d ",tableau[i][j]);
            }



        }
    }
}
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

void TestInitValTab2D() {

    int tableau[NBLIGNE][COLONNE];

    initBordure2D(tableau,NBLIGNE,COLONNE,0);

}






/***************************************************/