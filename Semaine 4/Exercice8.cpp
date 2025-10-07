
#include <stdio.h>
#define TAILLE 5

#define TEST 0

int verifMin(double tableau[],int taille);

int testverifMin(void);

/*****************************************************/

int main(void) {

    testverifMin();

    return 0;
}

/*****************************************************/

int verifMin(double tableau[],int taille) {

    int i;
    int min = 1000;

    for (i=0 ; i<taille-1 ; i++) {

        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    return min;
}

int testverifMin(void) {

    double tableau [TAILLE] = {101,99,55,2,100};

    int min;

    min = verifMin(tableau,TAILLE);

    printf("minimum = %d\n",min);

}