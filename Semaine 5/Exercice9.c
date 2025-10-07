#include <stdio.h>
#define TAILLE_LIGNE 3
#define TAILLE_COLONNE 3

int remplaceLigne2D(int tableau2D[][TAILLE_COLONNE],int nbLigne, int nbColonne, int tableau1D[nbColonne],int nLigne);
int initValTab2D(int tableau[][TAILLE_COLONNE], int nbligne, int nbColonne, int nbEntier);

void testremplaceLigne2D(void);

/***************************************************/

int main(void) {

    testremplaceLigne2D();

}

/***************************************************/

int remplaceLigne2D(int tableau2D[][TAILLE_COLONNE],int nbLigne, int nbColonne, int tableau1D[nbColonne],int nLigne) {

    int i;
    int j;

    for(i=0;i<nbLigne;i++) {

        printf("\n");

        for(j=0;j<nbColonne;j++) {

            if (i == nLigne) {
                tableau2D[i][j] = tableau1D[j]; //remplacer tout le tableau
            }
            printf("%d ", tableau2D[i][j]);

        }
    }
}

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

void testremplaceLigne2D(void) {

    int tableau2D[TAILLE_LIGNE][TAILLE_COLONNE];
    int tableau1D[TAILLE_COLONNE] = {1,2,5};

initValTab2D(tableau2D,TAILLE_LIGNE,TAILLE_COLONNE,7);

    remplaceLigne2D(tableau2D,TAILLE_LIGNE,TAILLE_COLONNE,tableau1D,0);



}
