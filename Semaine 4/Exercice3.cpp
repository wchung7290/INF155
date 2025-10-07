
#include <stdio.h>
#define TAILLE 5

#define TEST 1


double moyenneReel(double tableau[],int taille);

double testmoyenneReel(void);
/*****************************************************/

int main(void) {

#if TEST == 0

#endif

#if TEST == 1

testmoyenneReel();

#endif

    return 0;
}

/*****************************************************/

double moyenneReel(double tableau[],int taille) {

    int i;
    double somme = 0;

    for ( i = 0; i < taille; i++) {
    somme = somme + tableau[i];

    }

    somme = somme / i;

    return somme;

}

double testmoyenneReel(void) {

    double tableau [TAILLE] = {2,4,2,2,2};

    double moyenne = 0;

    moyenne = moyenne + moyenneReel(tableau,TAILLE);

    printf("moyenne = %lf",moyenne);

}
