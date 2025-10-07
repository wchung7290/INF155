#include <stdio.h>
#include <math.h>

#define TAILLE_TAB 20

double moyenneAmplitude(int val[], int taille);

void main(void) {

    int tab [TAILLE_TAB] = {0,200,250,180,170,180,185,155,10,-100,-200,-555,-183,54};
    double moyenne = 0;

    moyenne = moyenneAmplitude(tab, TAILLE_TAB);
    printf("moyenne = %lf",moyenne);


}

double moyenneAmplitude(int val[], int taille) {

    int i;
    int somme = 0;

    for (i=0;i<taille;i++) {
        somme = somme + abs(val[i]);

    }

    somme = somme / taille;
    return somme;
}

