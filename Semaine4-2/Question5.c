#include <stdio.h>

void min_max_saisie (int nb_saisie, int* min, int* max);

int main(void) {

    int nb_saisie;
    int min;
    int max;

    printf("Insere moi le nombre de valeur: ");
    scanf("%d",&nb_saisie);

    min_max_saisie(nb_saisie, &min,&max);

    printf("\nvaleur min: %d\n",min);

    printf("valeur max: %d",max);




}

void min_max_saisie (int nb_saisie, int* min, int* max) {

    int i = 0;
    int valeur;


    for (i=0;i<nb_saisie;i++) {

        printf("\nvaleur %d = ",i+1);
        scanf("%d",&valeur);

        if (i==0) {
            *min = valeur;
            *max = valeur;
        }

        else if (valeur > *max) {
            *max = valeur;
        }

        else if (valeur < *min) {
            *min = valeur;
        }
    }

}