#include <stdio.h>
#define TAILLE_CARRE 4

int diagonaleTab2D(int tableau[TAILLE_CARRE][TAILLE_CARRE],int taille);

int testdiagonaleTab2D ();

int initValTab2D(int tableau[][TAILLE_CARRE], int nbligne, int nbColonne, int nbEntier);

/***********************************/
int main(void) {
     testdiagonaleTab2D ();
}

/***********************************/

int diagonaleTab2D(int tableau[TAILLE_CARRE][TAILLE_CARRE],int taille) {

int valDiag = 0;

    int i= 0;
    int j = 0;

for ( i = 0; i < TAILLE_CARRE; i++) {

valDiag = i+j;

printf("\n ");

    for (j = 0; j < TAILLE_CARRE; j++) {
        if (i == j) {
            valDiag = i + j;
        }
       else if  ((i+j) > valDiag) {
            tableau[i][j] = 0;
        }
        else if ((i+j) < valDiag) {

            tableau[i][j] = 1;
        }

        printf("%d ", tableau[i][j]);
    }
}

}

int testdiagonaleTab2D () {



    int tableau [TAILLE_CARRE][TAILLE_CARRE];

    initValTab2D(tableau,TAILLE_CARRE,TAILLE_CARRE,6);

    diagonaleTab2D(tableau,TAILLE_CARRE);

}

int initValTab2D(int tableau[][TAILLE_CARRE], int nbligne, int nbColonne, int nbEntier) {


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
