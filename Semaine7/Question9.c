#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLONNE 10
#define LIGNE 5
#define POSLIGNE 0
#define POSCOLONNE 0

#define SOLNECESSAIRE 20

// Déclarations des fonctions (prototypes)

void geneTabAlea(int tableau[][COLONNE], int ligne, int colonne, int limiteVal);

int validerAncrange ( int sol[][COLONNE],int ligne,int colonne,int posligne, int poscolonne);

int main(void) {

    setbuf(stdout, 0);

    int tableau[LIGNE][COLONNE];
    int resultat;


    srand(time(NULL));

    geneTabAlea(tableau,LIGNE,COLONNE,99);

    resultat = validerAncrange(tableau,LIGNE,COLONNE,POSLIGNE,POSCOLONNE);

    printf("resultat = %d\n",resultat);

}

int validerAncrange ( int sol[][COLONNE],int ligne,int colonne,int posligne, int poscolonne) {

    // on doit valider si les case a cote son dans la zone

    int i;
    int j;

    int valeurChoisie;

    for (i = 0; i < ligne; i++) { //Pour trouver la valeur choisie
        for (j = 0; j < colonne; j++) {
            if (i == posligne && j == poscolonne) {
                valeurChoisie = sol[i][j];
            }
        }
    }

    printf("valeurChoisie = %d\n",valeurChoisie);

    for (i = posligne-1 ; i <= posligne+1; i++) {
        for (j = poscolonne-1 ; j <= poscolonne+1; j++) {
            if (i>=0 && i <ligne && j >= 0 && j < colonne) { // Vérification si dans la zone valide
                if (sol[i][j] <= SOLNECESSAIRE) {
                    return 0;
                }
            }
        }
    }
    return 1;

}

void geneTabAlea(int tableau[][COLONNE], int ligne, int colonne, int limiteVal) {
    srand(time(NULL));
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            tableau[i][j] = rand() % (limiteVal + 1);
            printf("%d\t", tableau[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
