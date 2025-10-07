
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
    for (i=0; i<taille;i++) {
        printf("tab[%d] = %d\n",i,tab[i]);

    }
}

void testvaleurTab() {

    int tab[TAILLE] = {1,2,3,4,5};

    valeurTab(tab,TAILLE);

}


