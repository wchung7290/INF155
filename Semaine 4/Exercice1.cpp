
#include <stdio.h>
#define TAILLE 5

#define TEST 0

void AffichageTab(int tableau [], int taille);

void testAffichageTab(void);

/************************************************************/

int main(void) {

#if TEST == 0
    int tableau [TAILLE] = {0};

    AffichageTab(tableau,TAILLE);
#endif TEST

#if TEST ==1

    testAffichageTab();

#endif TEST

}

/************************************************************/

void AffichageTab(int tableau [], int taille) {

int i;

    for (i=0;i<taille;i++) {

        printf("case %d = %d\n", i, tableau[i]);
    }

}

void testAffichageTab(void) {

    int tableau2 [2] = { 5, 6 };
    int tableau3[3] = { 10 , 30 , 50 };

    int taille2 = 2;
    int taille3 = 3;

    printf("Test 1\n");
    AffichageTab(tableau2, 2);

    printf("\nTest 2\n");
    AffichageTab(tableau3, 3);


}


