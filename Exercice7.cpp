

#include <stdio.h>
#define TAILLE 5

#define TEST 0

int occurenceTableau(int tableau[],int taille,int val);

void testoccurenceTableau(void);
/*****************************************************/

int main(void) {

    testoccurenceTableau();

    return 0;
}

/*****************************************************/

int occurenceTableau(int tableau[],int taille,int val) {

    int i;
    int occurence = 0;
    for (i=0;i<taille;i++) {

        if (tableau[i]==val) {
            tableau[i] = -1;
            occurence++;

            printf("%d ",tableau[i]);
        }

        else {
            printf("%d ",tableau[i]);
        }

    }
    return occurence;
}

void testoccurenceTableau(void) {

    int tableau[TAILLE] = {2,3,2,1,4};

    int selection = 2;
    int occurence;

    occurence = occurenceTableau(tableau,TAILLE,selection);

    printf("\nnombre choisie %d\n",selection);
    printf("presence du nombre choisie: %d\n",occurence);





}
