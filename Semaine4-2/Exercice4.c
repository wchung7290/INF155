
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
    int croissant = 1;

    for (i=0; i<taille;i++) {
        if (tab[i+1] < tab[i]) {
            croissant = 0;
            return croissant;
        }

        else {
            croissant = 1;
        }
    }
    return croissant;
}

void testvaleurTab() {

    int tab[TAILLE] = {1,2,3,4,5};

    int croissant;

    croissant = valeurTab(tab,TAILLE);

    printf("croissant : %d\n",croissant);

}


