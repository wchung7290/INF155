#include <stdio.h>
#define TAILLE 5

#define TEST 1

double sommeTableau(double tableau[], int taille);

double testsommeTableau(void);

/*****************************************************/

int main(void) {

#if TEST == 0
    double tableau[TAILLE] = {2+1+1+1+1};
    double somme;

    somme = sommeTableau(tableau,TAILLE);

    printf("somme = %lf",somme);
#endif

#if TEST == 1
testsommeTableau();
#endif

    return 0;
}

/*****************************************************/

double sommeTableau(double tableau[], int taille) {
    double somme;
    int i;

    for (i=0;i<taille;i++) {
    somme = somme + tableau [i];
    }

    return somme;

}

double testsommeTableau(void) {

    double tableau[TAILLE] = {5,4,3,2,1};

    double tableau1[3] = {1,1,1};


    printf("test1\n");
    printf("%lf",sommeTableau(tableau,TAILLE));

    printf("\ntest2\n");
    printf("%lf",sommeTableau(tableau1,3));

}