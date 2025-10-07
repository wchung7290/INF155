#include <stdio.h>
#define TAILLE_LIGNE 5
#define TAILLE_COLONNE 5


int initValTab2D(int tableau[][TAILLE_COLONNE], int nbligne, int nbColonne, int nbEntier);

int assignationZero(int tableau[][TAILLE_COLONNE], int nbLigne, int nbColonne, int selectionLigne, int selectionColonne);

int testassignationZero ();

/***************************************************/

int main(void) {

    setbuf(stdout,0);

testassignationZero();

}

/***************************************************/


int initValTab2D(int tableau[][TAILLE_COLONNE], int nbligne, int nbColonne, int nbEntier) {

    int i;
    int j;

    for (i=0;i<nbligne;i++) {

        printf("\n");

        for (j=0;j<nbColonne;j++) {

            tableau[i][j] = nbEntier;

            printf("%d ", tableau[i][j]);
        }
    }

    printf("\n");


    return tableau[i][j] ;
}

int assignationZero(int tableau[][TAILLE_COLONNE], int nbLigne, int nbColonne, int selectionLigne, int selectionColonne) {

    int i;
    int j;

    for (i = selectionLigne - 1 ; i<= selectionLigne +1; i++) {

        for (j = selectionColonne - 1 ; j<=selectionColonne+1; j++) {

            if (i>=0 && i<=nbLigne && j>=0 && j<=nbColonne ) {
                tableau[i][j] = 1;
            }
            else {
                // Fait rien
            }

        }
    }

    for (i = 0; i < nbLigne; i++) {
        printf("\n");

        for (j = 0; j < nbColonne; j++) {
            printf("%d ", tableau[i][j]);
        }
    }

    return 0;
}

int testassignationZero () {
        int tableau [TAILLE_LIGNE][TAILLE_COLONNE];

        initValTab2D(tableau,TAILLE_LIGNE,TAILLE_COLONNE,0);

        assignationZero(tableau,TAILLE_LIGNE,TAILLE_COLONNE,4,3);
    }

