
#include <stdio.h>
#define TAILLE 5

#define TEST 0

int valeurTab(int tab1[],int tab2[],int taille);

void testvaleurTab();

/************************************************************/

int main(void) {

    testvaleurTab();
}

/************************************************************/

int valeurTab(int tab1[],int tab2[],int taille) {

    int i;
    for (i=0; i<taille;i++) {
        if (tab1[i] != tab2[i]) {
            return 0;
        }

    }
    return 1;
}

void testvaleurTab() {

    int resultat;

    int tab[TAILLE] = {4,2,3,4,100};
    int tab2[TAILLE] = {4,2,3,100,100};

    resultat = valeurTab(tab,tab2,TAILLE);

    printf("identique? = %d\n",resultat);

}


