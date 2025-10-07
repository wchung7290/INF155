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

void placerAncrage(int sol[][COLONNE], int ligne, int colonne, int instruction[1][COLONNE]);

void affichetableau(int tableau[][COLONNE], int ligne, int colonne);

int main(void) {

    setbuf(stdout, 0);

    int tableau[LIGNE][COLONNE];
    int resultat;
    int instruction[1][COLONNE];


    srand(time(NULL));

    geneTabAlea(tableau,LIGNE,COLONNE,99);

    placerAncrage(tableau,LIGNE,COLONNE,instruction);

    affichetableau(tableau,LIGNE,COLONNE);

}

int validerAncrange ( int sol[][COLONNE],int ligne,int colonne,int posligne, int poscolonne) {

    // on doit valider si les case a cote son dans la zone

    int i;
    int j;

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

void placerAncrage(int sol[][COLONNE], int ligne, int colonne, int instruction[1][COLONNE]) {

    int i;
    int j;
    int validation = 0;

    for (i = 0; i < ligne; i++) {
        for (j = 0; j < colonne; j++) {
            validation = validerAncrange(sol,ligne,colonne,i,j);

            if (validation) {
                instruction[0][j] = i;
                instruction[1][j] = j;

                sol[i][j] = 111;
            }
        }
    }

}

void affichetableau(int tableau[][COLONNE], int ligne, int colonne) {

    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("%d\t", tableau[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
