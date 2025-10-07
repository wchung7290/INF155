
#include <stdio.h>
#define TAILLE 5

int copieInverse(int tabSource[],int tabDestination[],int tailleTab);

void testcopieInverse();

/*****************************************************/

int main(void) {

    testcopieInverse();

    return 0;
}

/*****************************************************/

int copieInverse(int tabSource[],int tabDestination[],int tailleTab) {

    int i;

    for (i=0; i<tailleTab; i++) {

        tabDestination[i] = tabSource[tailleTab-i-1]; // -1 pour eviter dépassement de tableau
        printf("%d ",tabDestination[i]);
    }

}

void testcopieInverse() {


    int tabSource[TAILLE] = {6,99,64,20,10};
    int tabDestination[TAILLE] = {0};

    int i;

    printf("\n Tableau Source: ");

    for (i=0; i<TAILLE; i++) {
        printf("%d ", tabSource[i]);
    }

    printf("\n Tableau Inverse: ");

    copieInverse(tabSource,tabDestination,TAILLE);

}