
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
    int occurence = 0;
    for (i=0; i<taille;i++) {
        if (tab[i] == entier) {
            occurence++;
            tab[i] = -1;


        }
        printf("tab[%d] = %d\n",i,tab[i]);
    }
    return occurence;
}

void testvaleurTab() {

    int tab[TAILLE] = {2,2,2,4,5};

    int resultat;
    resultat = valeurTab(tab,TAILLE,2);

    printf("valeur = %d",resultat);

}


