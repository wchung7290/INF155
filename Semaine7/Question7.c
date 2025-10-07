#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define COLONNE 10
#define LIGNE 5
#define MAX 5

void triSelection(int tableau[], long taille);

void permuterEntier(int * entierA, int * entierB);

void geneTabAlea(int tableau[][MAX],int taille, int colonne,int limiteVal);

void trierLigneMatrice (int matrice[][MAX],int taille,int colonne,int ligneTrier);

void afficherTAB(int tableau[][MAX],int taille, int colonne);

int main(void) {
    int tableau[MAX][MAX];

    geneTabAlea(tableau,LIGNE,COLONNE,9);

    trierLigneMatrice(tableau,LIGNE,COLONNE,2);

    printf("\n");

    afficherTAB(tableau,LIGNE,COLONNE);



}

void trierLigneMatrice (int matrice[][MAX],int taille,int colonne,int ligneTrier) {


    int i;
    int temp[colonne];

    for (i=0;i<colonne;i++) {
        temp[i] = matrice[ligneTrier][i];
    }

    triSelection(temp,colonne);

    for (i=0;i<colonne;i++) {
        matrice[ligneTrier][i] = temp[i];
    }

}

void triSelection(int tableau[], long taille) {

    long i;
    long j;
    long positionMin;

    // Parcours les éléments du tableau
    for (i = 0; i < taille - 1; i++) {

        // Initialise la valeur min avec l’élément courant
        positionMin = i;

        // Cherche le minimum dans le segment supérieur du tableau non trié
        for (j = i + 1; j < taille; j++) {

            // Si une valeur plus petit est trouvée on la remplace
            if (tableau[j] < tableau[positionMin]) {
                positionMin = j;
            }
        }

        // Permute la valeur min trouvée avec l’élément courant
        permuterEntier(&tableau[i],&tableau[positionMin]);

        // Ceci n'est pas nécessaire au tri, cet affichage est pour la démonstration
#if AFFICHAGE_ITERATION == 1
        afficherTableau(tableau,taille);
#endif
    }
}

void permuterEntier(int * entierA, int * entierB){

    int tempo;     // Variable temporaire utile à la permutation

    // Effectue la permutation des contenues pointé par les références
    tempo = *entierA;
    *entierA = *entierB;
    *entierB = tempo;
}

void geneTabAlea(int tableau[][MAX],int taille, int colonne,int limiteVal) {

    int i;
    int j;

    srand(time(NULL));
    rand();

    for (i = 0;i<taille;i++ ) {
        for (j = 0;j<colonne;j++) {
            tableau[i][j] = rand() % limiteVal;
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
}

void afficherTAB(int tableau[][MAX],int taille, int colonne) {

    int i;
    int j;

    for (i = 0;i<taille;i++ ) {
        for (j = 0;j<colonne;j++) {
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
}




