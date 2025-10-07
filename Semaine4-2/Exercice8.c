
#include <stdio.h>
#define TAILLE 5

#define TEST 0

int valeurTab(int tab[],int taille);

void testvaleurTab();

/************************************************************/

int main(void) {

    testvaleurTab();
}

/************************************************************/

int valeurTab(int tab[],int taille) {

    int i;
    int minimum = 1000;
    for (i=0; i<taille;i++) {
        if (tab[i] <minimum) {
            minimum = tab[i];
        }

    }
    return minimum;
}

void testvaleurTab() {

    int minimum;

    int tab[TAILLE] = {4,2,3,4,5};

    minimum = valeurTab(tab,TAILLE);

    printf("minimum = %d\n",minimum);

}


