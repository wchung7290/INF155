#include <stdio.h>
#define TAILLE 5

int identitiqueTab(double tab1[], double tab2[], int taille);

int testidentitiqueTab(void);

/*****************************************************/

int main(void) {

    setbuf(stdout,0);

    testidentitiqueTab();
    return 0;
}

/*****************************************************/

int identitiqueTab(double tab1[], double tab2[], int taille) {

    int i;

    for (i = 0; i < taille; i++) {
         if (tab1[i]!=tab2[i]) {

             return 0;
         }
    }
    return 1;
}

int testidentitiqueTab(void) {

    int identique;
    double tab1[TAILLE] = {1,2,3,4,5};
    double tab2[TAILLE] = {1,2,3,4,5};

    identique = identitiqueTab(tab1, tab2, TAILLE);

    printf("identique? : %d",identique);
}