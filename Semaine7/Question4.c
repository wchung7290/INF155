#include <stdio.h>
#include <math.h>

#define TAILLE_TAB 14

int corrigerSignalAudio (int tab[], int taille, int tabcorrige[]);


void main(void) {
setbuf(stdout,0);
    int tab [TAILLE_TAB] = {0,200,250,180,170,180,185,155,10,-100,-200,-555,-183,54};
    int tab2 [TAILLE_TAB] = {0,200,250,180,170,180,185,155,10,-100,-200,-555,-183,54};
    double moyenne = 0;

    corrigerSignalAudio(tab, TAILLE_TAB, tab2);

}

int corrigerSignalAudio (int tab[], int taille, int tabcorrige[]) {
    // Trouver la moyenne

    int i;
    int moyenne = 0;
    int valCorr = 0;

    printf("Signal original: \n");

    for (i = 0; i < taille; i++) {
        moyenne = moyenne + abs(tab[i]);
        printf("%d, ", tab[i]);
    }
    moyenne = moyenne / taille;

    printf("\nmoyenne = %d\n", moyenne);

    printf("\nSignal corrige: \n");

    for (i = 0; i < taille; i++) {
        if (abs(tab[i]) > (3*moyenne)) {

            if (tab[i] < 0) {
                tabcorrige[i] = moyenne*-1;
            valCorr++;
            }
            else {
                tabcorrige[i] = moyenne;
                valCorr++;
            }


        }
        printf("%d, ", tabcorrige[i]);
    }

    return valCorr;
}


