#include <stdio.h>

double affichePression(double valeurAlt);

void main(void) {

    double valeurAlt = 110;

    affichePression(valeurAlt);

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
}