#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLONNE 10
#define LIGNE 5
#define LIMITE_DIAMETRE 5
#define MAX_INSTRUCTIONS 50

// Déclarations des fonctions (prototypes)
void geneTabAlea(int tableau[][COLONNE], int ligne, int colonne, int limiteVal);
int instructionsMachine(int plaque[][COLONNE], int ligne, int colonne, int instruction[][3]);

int main(void) {
    int plaque[LIGNE][COLONNE];
    int instruction[MAX_INSTRUCTIONS][3];

    printf("Plaque générée :\n");
    geneTabAlea(plaque, LIGNE, COLONNE, LIMITE_DIAMETRE);

    int nb = instructionsMachine(plaque, LIGNE, COLONNE, instruction);

    printf("Instructions générées (%d) :\n", nb);
    for (int i = 0; i < nb; i++) {
        printf("Y: %d, X: %d, Diamètre: %d\n",
               instruction[i][0], instruction[i][1], instruction[i][2]);
    }

    return 0;
}

// Définitions des fonctions

void geneTabAlea(int tableau[][COLONNE], int ligne, int colonne, int limiteVal) {
    srand(time(NULL));
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colonne; j++) {
            tableau[i][j] = rand() % (limiteVal + 1);
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int instructionsMachine(int plaque[][COLONNE], int ligne, int colonne, int instruction[][3]) {
    int nbInstruction = 0;

    for (int y = 0; y < ligne; y++) {
        for (int x = 0; x < colonne; x++) {
            if (plaque[y][x] > 0 && nbInstruction < MAX_INSTRUCTIONS) {
                instruction[nbInstruction][0] = y;
                instruction[nbInstruction][1] = x;
                instruction[nbInstruction][2] = plaque[y][x];
                nbInstruction++;
            }
        }
    }

    return nbInstruction;
}
