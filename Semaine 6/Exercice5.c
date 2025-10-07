#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAILLE_TAB 40

void codePermanent (char nom [], char prenom [], int annee, int mois, int jour, char codePermanent[]);

int main(void) {

    char codePerma[TAILLE_TAB];
    char nom[TAILLE_TAB] = "Chung";
    char prenom[TAILLE_TAB] = "William";
    int annee = 2003;
    int mois = 5;
    int jour = 1;

    codePermanent(nom, prenom, annee, mois, jour, codePerma);

}

void codePermanent (char nom [], char prenom [], int annee, int mois, int jour, char codePermanent[]) {

    int i = 0;

    while (i <= 2) {
        nom[i] = toupper(nom[i]);
        prenom[i] = toupper(prenom[i]);
        i++;

        if (i==2) {
            nom[i] = '\0';
            prenom[i] = '\0';
        }
    }

    sprintf(codePermanent, "%s%s%d%d%d \n", nom, prenom, annee, mois, jour);

    if (mois<10) {
        sprintf(codePermanent, "%s%s%d0%d%d \n", nom, prenom, annee, mois, jour);
    }
    if (jour<10) {
        sprintf(codePermanent, "%s%s%d%d0%d \n", nom, prenom, annee, mois, jour);
    }

    if (mois<10 && jour<10) {
        sprintf(codePermanent, "%s%s%d0%d0%d \n", nom, prenom, annee, mois, jour);
    }

    printf("%s\n", codePermanent);

}
