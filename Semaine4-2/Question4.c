#include <stdio.h>

void permutation (int* val1, int* val2);

int main(void) {

    int val1 = 5;
    int val2 = 10;

    printf("valeur1 = %d\nvaleur2 = %d\n",val1,val2);

    permutation(&val1,&val2);

    printf("valeur1 = %d\nvaleur2 = %d",val1,val2);

}

void permutation (int* val1, int* val2) {

    int temp;

    temp = *val1;
    *val1 = *val2;
    *val2 = temp;

}