
#include <stdio.h>
#define TAILLE 5

#define TEST 0

int valeurTab(int tab[],int taille, int entier);

void testvaleurTab();

/************************************************************/

int main(void) {

    testvaleurTab();
}

/************************************************************/

int valeurTab(int tab[],int taille, int entier) {

    int i;
    for (i=0; i<taille;i++) {
        if (tab[i] == entier) {
            return 1;
        }

    }
    return 0;
}

void testvaleurTab() {

    int tab[TAILLE] = {1,2,3,4,5};

    int resultat;
    resultat = valeurTab(tab,TAILLE,2);

    printf("valeur = %d",resultat);

}


