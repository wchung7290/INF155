
#include <stdio.h>
#define TAILLE 5

#define TEST 0

void valeurTab(int tab1[],int tab2[],int taille);

void testvaleurTab();

/************************************************************/

int main(void) {

    testvaleurTab();
}

/************************************************************/

void valeurTab(int tab1[],int tab2[],int taille) {

    int i;
    for (i=0; i<taille;i++) {
        tab2[i] = tab1[taille-i-1];
        printf("tab1[%d] = %d\t",i,tab1[i]);
        printf("tab2[%d] = %d\n",i,tab2[i]);

    }

}

void testvaleurTab() {

    int resultat;

    int tab[TAILLE] = {1,2,3,4,5};
    int tab2[TAILLE];

    valeurTab(tab,tab2,TAILLE);

}


