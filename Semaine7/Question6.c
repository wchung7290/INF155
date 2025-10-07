#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define MAX 7000
#define NIPCHERCHE 4546

int forceBruteNIP(int* NIP);

int main(void) {

    int resultat;
    int NIP = 0;
    int *ptrNIP;

    ptrNIP = &NIP;

    srand(time(NULL));

    resultat = forceBruteNIP(ptrNIP);

    printf("resultat = %d\n", resultat);
    printf("ptrNIP = %d",*ptrNIP);
}

int forceBruteNIP(int* NIP) {

    int valeurEssaie = 0;
    int nbEssaie = 0;

    while (NIPCHERCHE != valeurEssaie && nbEssaie<MAX){
    valeurEssaie = rand()%9999;
        nbEssaie++;
    }

    if (NIPCHERCHE == valeurEssaie) {
        *NIP = valeurEssaie;
        return nbEssaie;
    }
    else if (NIPCHERCHE != valeurEssaie) {
        return 0;
    }

}