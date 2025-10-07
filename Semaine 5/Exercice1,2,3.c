#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAILLE 5

void permuterEntier (int* entierA, int* entierB);

void triSelection (int tableau[],int taille);

void triInsersion(int tableau[], long taille);

void triBulle(int tableau[], long taille);

int valAlea(int valMax);

void remplirTab(int tableau[], int taille);

void afficherTab(int tableau[], int taille);

void TestfonctionTri();

/****************************/

int main(void) {

    srand(time(NULL));

    TestfonctionTri();

}

/****************************/

void permuterEntier (int* entierA, int* entierB) {

    int temp;

    temp = *entierA;
    *entierA = *entierB;
    *entierB = temp;
}

void triSelection (int tableau[],int taille) {

    int i;
    int j;
    int minIndex;

    for (i = 0 ; i < taille-1 ; i++) {

        minIndex = i;

        for (j = i+1 ; j<taille; j++) {
            if (tableau[j] < tableau[minIndex]) {
                minIndex = j;
            }
        }

        permuterEntier(&tableau[i],&tableau[minIndex]);
    }
}

void triInsersion(int tableau[], long taille) {

    long i;                //Itérateur de la section
    long j;                //Itérateur de la section
    int valeurInsertion;   //Valeur à insérer

    // Parcours du tableau à trier
    // Débute à 1 parceque on considère l'élément 0 comme trié
    for (i = 1; i < taille; i++) {

        valeurInsertion = tableau[i];    // Conserve en mémoire la valeur de la position i à inséré
        j = i - 1;                       // Initialise l'itérateur d'insertion (j) à la position précédente de (i)

        // Tanque la position de l'insertion n'est pas trouvé et que on est dans le tableau
        while (j >= 0 && tableau[j] > valeurInsertion) {

            tableau[j + 1] = tableau[j];    // Décale la valeur de la position j vers la droite du tableau
            j--;                            // Décrémente l'itérateur j
        }

        // Insère la valeur à insérer courante dans le tableau à la position j + 1
        // Le + 1 vient du fait que la boucle précédente arrête quand la valeur est égale ou plus petite ou
        // que l'itérateur j = -1
        tableau[j + 1] = valeurInsertion;

        // Ceci n'est pas nécessaire au tri, cet affichage est pour la démonstration
#if AFFICHAGE_ITERATION == 1
        afficherTableau(tableau,taille);
#endif
    }
}

void triBulle(int tableau[], long taille) {

    long i;
    long j;
    int tempo;

    // Pour tous les éléments triés du tableau en commençant à la fin
    for (i = taille - 1; i >= 0; i--) {

        // Pour les éléments du tableau non triés en commençant au début
        for (j = 0; j < i; j++) {

            // Si l'élément suivant est plus grand que l'élément courant
            if (tableau[j] > tableau[j + 1]) {
                // Permute l'élément courant avec l'élément suivant
                permuterEntier(&tableau[j],&tableau[j + 1]);

                // Ceci n'est pas nécessaire au tri, cet affichage est pour la démonstration
#if AFFICHAGE_ITERATION == 1
                afficherTableau(tableau,taille);
#endif
            }
        }
    }
    // Inspiration : https://www.youtube.com/watch?v=lyZQPjUT5B4&ab_channel=AlgoRythmics
}

int valAlea(int valMax) {

    int valeurAlea;

    valeurAlea = rand() % valMax;

return valeurAlea;

}

void remplirTab(int tableau[], int taille) {

    int i;

    for (i = 0; i < taille; i++) {

        tableau[i] = valAlea(100);


    }

}

void afficherTab(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

void TestfonctionTri() {

   int tableau[TAILLE];

#define TRI 3

#if TRI == 1
   remplirTab(tableau,TAILLE);

    afficherTab(tableau,TAILLE);

    triSelection(tableau,TAILLE);

    afficherTab(tableau,TAILLE);

#endif TRI 1

#if TRI == 2

    remplirTab(tableau,TAILLE);

    afficherTab(tableau,TAILLE);

    triInsersion(tableau,TAILLE);

    afficherTab(tableau,TAILLE);

#endif TRI 2

#if TRI == 3

    remplirTab(tableau,TAILLE);

    afficherTab(tableau,TAILLE);

    triBulle(tableau,TAILLE);

    afficherTab(tableau,TAILLE);

#endif TRI 3
}