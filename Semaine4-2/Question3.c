#include <stdio.h>


int main(void) {



    int valeur;
    int* ptr_valeur;



    printf("Ecris moi la valeur entiere desire et je te donna sa valeur fois 2");
    scanf("%d",&valeur);

   ptr_valeur = &valeur;

    *ptr_valeur = *ptr_valeur*2;

    printf("valeur de *ptr_valeur = %d", *ptr_valeur);



}