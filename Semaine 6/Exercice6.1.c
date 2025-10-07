#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 40

void insererChaine(char chaine1[], char chaine2[], int position);

int main(void) {
    char chaine1[TAILLE_TAB] = "william";
    char chaine2[TAILLE_TAB] = "chung";
    int position = 1;

    insererChaine(chaine1, chaine2, position);

}

void insererChaine(char chaine1[], char chaine2[], int position) {

    char temp[TAILLE_TAB];
    int i =0;
    int j = 0;

    while (chaine1[i] != '\0') {

        if (i > position) {
            temp[j] = chaine1[i];
            j++;
        }
        i++;
    }

    temp[j] = '\0'; // À mettre pour terminer la lecture dans temp et non corrompre les donnée

    printf("valeur temp: %s\n", temp);

    i =0;

    while (chaine1[i] != '\0') {

        if (i > position) {
            chaine1[i] = chaine2[j];
        }
        i++;
    }
    printf("chaine1: %s\n", chaine1);

    sprintf(chaine1, "%s%s%s", chaine1,chaine2,temp);

    printf("chaine1: %s\n", chaine1);

}

