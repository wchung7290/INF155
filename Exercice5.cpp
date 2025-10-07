

#include <stdio.h>
#define TAILLE 5

#define TEST 0

int presenceTableau(int tableau[],int taille,int val);

void testpresenceTableau(void);

/*****************************************************/

int main(void) {

    testpresenceTableau();

    return 0;
}

/*****************************************************/

int presenceTableau(int tableau[],int taille,int val) {

    int i;
    for (i=0;i<taille;i++) {

        if (tableau[i]==val) {

            return 1;
        }
        else return 0;

    }

}

void testpresenceTableau(void) {

    int tableau[TAILLE] = {1,2,3,4,5};

    int selection = 1;
    int presence;

    presence = presenceTableau(tableau,TAILLE,selection);

    printf("nombre choisie %d\n",selection);
    printf("presence du nombre choisie %d\n",presence);




}