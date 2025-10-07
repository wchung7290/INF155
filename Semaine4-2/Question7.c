#include <stdio.h>

int* lire_entier ();

int main(void) {

    int valeur;

    valeur = lire_entier();

    printf("valeur = %p\n", &valeur);
}

int* lire_entier () {

    int ptr;

    printf("donne moi la valeur entiere ");
    scanf("%d",&ptr);

    return ptr;
}




