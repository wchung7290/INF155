
#include <stdio.h>
#define TAILLE_LIGNE 4
#define TAILLE_COLONNE 5

int initValTab2D(int tableau[][TAILLE_COLONNE], int nbligne, int nbColonne, int nbEntier);

int produitLigneTab2D(int tableau2D[][TAILLE_COLONNE],int nbLigne,int nbColonne, int tableau1D[nbLigne]);

int testproduitLigneTab2D(void);


/***************************************************/
int main() {

    testproduitLigneTab2D();
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


    return tableau[i][j] ;
}

int produitLigneTab2D(int tableau2D[][TAILLE_COLONNE],int nbLigne,int nbColonne, int tableau1D[nbLigne]) {

    int i;
    int j;
    int produit;

    for(i=0;i<nbLigne;i++) {
    printf("\n");
        produit = 1;

        for(j=0;j<nbColonne;j++) {

            produit = produit * tableau2D[i][j];
            tableau1D[i] = produit;

        }
        printf("Tableau1D[%d] %d ",i,tableau1D[i]);
    }
}

int testproduitLigneTab2D(void) {


    int tableau2D[TAILLE_LIGNE][TAILLE_COLONNE];
    int tableau1D[TAILLE_LIGNE];

    initValTab2D(tableau2D,TAILLE_LIGNE,TAILLE_COLONNE,2);



    produitLigneTab2D(tableau2D,TAILLE_LIGNE,TAILLE_COLONNE,tableau1D);

}
