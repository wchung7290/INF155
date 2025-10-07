#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 40

void insererChaine(char chaine1[], char chaine2[], int position);

int main(void) {
    char chaine1[TAILLE_TAB] = "aaaaa";
    char chaine2[TAILLE_TAB] = "bbbbb";
    int position = 2;

    insererChaine(chaine1, chaine2, position);

}

void insererChaine(char chaine1[], char chaine2[], int position) {
    char temp[TAILLE_TAB];
    int i = 0, j = 0;
    int k = 0;

    // Sécurité : on calcule indirectement si position dépasse la fin de chaine1
    while (chaine1[k] != '\0' && k < position) {
        temp[j++] = chaine1[k++];
    }

    // Si position <= 0, on saute cette boucle et on insère dès le début
    // Si position > longueur de chaine1, on aura tout copié

    // Insertion de chaine2
    i = 0;

    while (chaine2[i] != '\0') {
        temp[j] = chaine2[i];
        j++;
        i++;
    }

    printf("0: %s \n", temp);

    i = 0;

    // Reprise du reste de chaine1
    while (chaine1[i] != '\0') {
        temp[j] = chaine1[i];
        j++;
        i++;
    }
    printf("1: %s \n", temp);

    // Fin de chaîne
    temp[j] = '\0';

    // Recopie finale dans chaine1

    i = 0;

    while (temp[i] != '\0') {
        chaine1[i] = temp[i];
        i++;
    }
    chaine1[i] = '\0';

    // Affichage final
    printf("Resultat : %s\n", chaine1);

    printf("chaine2 : %s\n", chaine2);
    printf("temp : %s\n", temp);
}

