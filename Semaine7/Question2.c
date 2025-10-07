#include <stdio.h>

#define NB_ALTITUDE 6

double affichePression(double valeurAlt);

void testAffichePression();

void main(void) {

    double valeurAlt = 110;

    testAffichePression(valeurAlt);

}

double affichePression(double valeurAlt) {

    double pression;

    pression = 1013.25 - (0.12 * valeurAlt);

    // pluie et vent

    if (pression > 300 && pression < 500) {

        printf("Pluie et vent");

    }

    else if (pression >= 500 && pression < 900) {

        printf("Variable");

    }

    else if (pression >= 900 && pression < 1020) {

        printf("Soleil");

    }

    else {
        printf("Erreur de lecture");
    }
    return pression;
}

void testAffichePression() {

    double tabAltitude [NB_ALTITUDE] = {0,500,1000,4000,5000,6500};

    int i;

    for (i = 0; i < NB_ALTITUDE; i++) {
        printf("Test %d : Altitude = %lf\t", i, tabAltitude[i]);
        // affichePression(tabAltitude[i]);
        printf(", avec une pression de : %lf \n",affichePression(tabAltitude[i]));
    }
}