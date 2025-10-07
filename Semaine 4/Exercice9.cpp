#include <stdio.h>
#define TAILLE 5

int posMax(double tableau[],int taille);

int testposMax(void);

/*****************************************************/

int main(void) {

    setbuf(stdout,0);

    testposMax();

    return 0;
}

/*****************************************************/

int posMax(double tableau[],int taille) {

    int i;
    int posmax = 0;
    int max = 0;

    for (i=0 ; i<taille ; i++) {

        if (tableau[i] > max) {
            max = tableau[i];
            posmax = i;

        }
    }

    return posmax;
}

int testposMax(void) {

    double tableau [TAILLE] = {100,1,1,104,102};

    int positionmax;

    positionmax = posMax(tableau,TAILLE);

    printf("position max = %d\n",positionmax);

}