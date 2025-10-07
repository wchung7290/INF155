#include <stdio.h>


void division_entiere (int numerateur, int diviseur, int* quotient, int* restant);

int main(void) {


    int numerateur;
    int diviseur;
    int quotient;
    int restant;

    printf("Insere moi la valeur du numerateur\n");
    scanf("%d",&numerateur);

    printf("\nInsere moi la valeur du diviseur");
    scanf("%d",&diviseur);

    division_entiere(numerateur,diviseur,&quotient,&restant);

    printf("\nquotient = %d",quotient);
    printf("\nrestant = %d",restant);

}

void division_entiere (int numerateur, int diviseur, int* quotient, int* restant) {

    *quotient = numerateur / diviseur;

    *restant = numerateur % diviseur;

}

