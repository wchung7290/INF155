
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
    int maximum = 0;
    for (i=0; i<taille;i++) {
        if (tab[i] >maximum) {
            maximum = i;;
        }

    }
    return i;
}

void testvaleurTab() {

    int maximum;

    int tab[TAILLE] = {4,2,3,4,100};

    maximum = valeurTab(tab,TAILLE);

    printf("minimum = %d\n",maximum);

}


