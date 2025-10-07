
#include <stdio.h>
#define TAILLE 5

#define TEST 0

double TailleTab(double tab[],int taille);

void testvaleurTab();

/************************************************************/

int main(void) {

    double somme;

    testvaleurTab();
}

/************************************************************/

double tailleTab(double tab[],int taille) {

    int i;
    double somme = 0;

    for (i=0; i<taille;i++) {

        somme = somme + tab[i];
    }

    somme = somme / taille;

    return somme;
}

void testvaleurTab() {

    double somme;

    double tab[TAILLE] = {1,2,3,4,5};

    somme = tailleTab(tab,TAILLE);

    printf("moyenne = %lf",somme);

}


