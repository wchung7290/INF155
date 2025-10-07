#include <stdlib.h>			/* Module Standart */
#include <stdio.h>			/* Module Entrée - Sortie */
#include <time.h>

#define NB_COLONNE    4
#define NB_LIGNE 3


void initMatrice(int matrice[][NB_COLONNE], int nbLigne, int nbColonne, int valeur);

void main(void) {

    int matrice[NB_LIGNE][NB_COLONNE];

    initMatrice(matrice[NB_LIGNE], NB_LIGNE, NB_COLONNE, 1);

}

void initMatrice(int matrice[][NB_COLONNE], int nbLigne, int nbColonne, int valeur) {

    int i;            //Itérateur des lignes
    int j;            //Itérateur des colonnes

    // Pour chaque ligne de la matrice
    for (i = 0; i < nbLigne; i++) {
printf("\n");
        // Pour chaque colonne de la matrice
        for (j = 0; j < nbColonne; j++) {

            matrice[i][j] = valeur;    // Pour chaque case de la matrice on attribut la valeurç

            printf("%d ", matrice[i][j]);
        }
    }
}