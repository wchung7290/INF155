
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define EXERCICE 1

/****************************************************************************************/

#if EXERCICE == 1

double max_des_deux(double val1, double val2);

double max_des_trois(double val1, double val2, double val3);

double max_des_quatre(double val1, double val2, double val3, double val4);

int main() {
    setbuf(stdout,0);

    double valeur1 = 5.0;
    double valeur2 = 7.0;
    double valeur3 = 9.0;
    double valeur4 = 11.0;
    double valeurmax;

    valeurmax = max_des_deux(valeur1,valeur2);

    printf("valeurmax 2 val= %lf\n",valeurmax);

    valeurmax=max_des_trois(valeur1,valeur2,valeur3);
    printf("valeurmax 3 val= %lf\n",valeurmax);

    valeurmax=max_des_quatre(valeur1,valeur2,valeur3,valeur4);
    printf("valeurmax 3 val= %lf",valeurmax);

}

double max_des_deux(double val1, double val2) {
    if (val1>val2) {
        return val1;
    }
    else {
        return val2;
    }

}

double max_des_trois(double val1, double val2, double val3) {

    if (val3>max_des_deux(val1,val2)) {

        return val3;

    }

    else return max_des_deux(val1,val2);
}

double max_des_quatre(double val1, double val2, double val3, double val4) {

    if (val4>max_des_trois(val1,val2,val3)) {
        return val4;
    }
    else return max_des_trois(val1,val2,val3);
}
#endif EXERICE 1

/****************************************************************************************/

#if EXERCICE ==2

double calculer_aire_cercle(double rayon);
double test_calculer_aire_cercle(void);

#define test 0


int main(void) {

    double rayon;
    double aire;

#if test==0

    printf("Insertion du rayon");
    scanf("%lf",&rayon);

    aire=calculer_aire_cercle(rayon);

    printf("Aire du cercle avec rayon de %lf: %lf",aire,rayon);

#endif

#if test==1
test_calculer_aire_cercle();
#endif test

}

double calculer_aire_cercle(double rayon) {

    double aire;

    aire=M_PI*rayon*rayon;

    return aire;
}

double test_calculer_aire_cercle(void) {
    double rayon = 2;
    double rayon2 = 4;
    double aire;

    aire=calculer_aire_cercle(rayon);

    printf("Aire = %lf et rayon est %lf\n",aire,rayon);

    aire=calculer_aire_cercle(rayon2);

    printf("Aire = %lf et rayon est %lf\n",aire,rayon2);

}

#endif EXERCICE 2

/****************************************************************************************/

#if EXERCICE ==3
#define test 0
double calculer_aire_rectangle(double longueur, double largeur);
double test_calculer_aire_rectangle(void);

#if test==0

int main(void) {



setbuf(stdout,0);

    double longueur;
    double largeur;
    double aire;

    printf("Insertion de la longueur");
    scanf("%lf",&longueur);

    printf("Insertion de la longueur");
    scanf("%lf",&largeur);

    aire= calculer_aire_rectangle(longueur,largeur);

    printf("Aire est : %lf", aire);

}
#endif test 0;

#if test==1
int main(void) {
    setbuf(stdout,0);

    test_calculer_aire_rectangle();

}

#endif test 1

double calculer_aire_rectangle(double longueur, double largeur) {

    double aire;

    aire = longueur*largeur;

    return aire;
}

double test_calculer_aire_rectangle(void) {

    double longueur = 2;
    double largeur = 3;
    double aire;

    aire = calculer_aire_rectangle(longueur,largeur);

    printf("aire est : %lf", aire);


}

#endif EXERCICE 3

/****************************************************************************************/

#if EXERCICE ==4


#define test 1
double max_des_deux(double val1, double val2);
double calculer_aire_cercle(double rayon);
double calculer_aire_rectangle(double longueur, double largeur);

#if test == 0
int main(void) {
    setbuf(stdout,0);

    double longueurRectangle;
    double largeurRectangle;
    double aireRectangle;

    double rayonCercle;
    double aireCercle;

    double aireTot;

    printf("Entrer la longueur du rectangle: ");
    scanf("%lf",&longueurRectangle);

    printf("\nEntrer la largeur du rectangle: ");
    scanf("%lf",&largeurRectangle);

    printf("\nEntrer rayon du cercle");
    scanf("%lf",&rayonCercle);

    // Pour valider sa présence

    aireRectangle = calculer_aire_rectangle(longueurRectangle,largeurRectangle);
    aireCercle = calculer_aire_cercle(rayonCercle);

    if (rayonCercle<(longueurRectangle) && rayonCercle<(largeurRectangle/2)) {
        aireTot= aireRectangle-aireCercle;
    }
    else {
        aireTot=0;
        printf("\nAire du rectangle trop petit pour le cercle!!!");
    }
printf("Aire total: %lf",aireTot);

}
#endif test

#if test == 1
int main(void) {
    setbuf(stdout,0);

    double longueurRectangle = 10;
    double largeurRectangle = 10;
    double aireRectangle;

    double rayonCercle = 4;
    double aireCercle;

    double aireTot;

    printf("Longueur du rectangle: %lf ",longueurRectangle);

    printf("\nLargeur du rectangle: %lf ",largeurRectangle);

    printf("\nrayon du cercle: %lf ",rayonCercle);

    // Pour valider sa présence

    aireRectangle = calculer_aire_rectangle(longueurRectangle,largeurRectangle);
    aireCercle = calculer_aire_cercle(rayonCercle);

    if (rayonCercle<(longueurRectangle) && rayonCercle<(largeurRectangle/2)) {
        aireTot= aireRectangle-aireCercle;
    }
    else {
        aireTot=0;
        printf("\nAire du rectangle trop petit pour le cercle!!!");
    }
    printf("Aire total: %lf",aireTot);

}
#endif test


double max_des_deux(double val1, double val2) {
    if (val1>val2) {
        return val1;
    }
    else {
        return val2;
    }
}
double calculer_aire_cercle(double rayon) {

    double aire;

    aire=M_PI*rayon*rayon;

    return aire;
}
double calculer_aire_rectangle(double longueur, double largeur) {

    double aire;

    aire = longueur*largeur;

    return aire;
}



#endif EXERCICE

/****************************************************************************************/

#if EXERCICE == 5

double moyenne_dee_1_million(int nbFace);

int main(void) {
    setbuf(stdout,0);

    srand(time(NULL));
    rand();

    int nbFace;
    double moyenne;

    printf("Donne moi nombre de face du dee");
    scanf("%d",&nbFace);

    //La fonction ne fait pas la moyenne de 1 million mais seulement de 10000 car 1000000 prend trop de temps a load

    moyenne=moyenne_dee_1_million(nbFace);
    printf("Moyenne: %lf",moyenne);

}

double moyenne_dee_1_million(int nbFace) {
    int i;
    double moyenne = 0;
    double nombre_aleatoire = 10000;
    double somme =0 ;

for (i=0; i < 1000;i++) { //ATTENTION UN MILLION VA PRENDRE BEAUCOUP DE TEMPS A LOAD!!!

nombre_aleatoire = rand();

    while (nombre_aleatoire>nbFace) {
        nombre_aleatoire = rand(); // valeur inferieur an nombre de face, aussi remplacable par rand()%(limite de valeur)
    }
    somme = somme+nombre_aleatoire;
}
    moyenne = somme/i;

return moyenne;

}

#endif EXERCICE

/****************************************************************************************/
#if EXERCICE == 7
int confirmation_valeur(int valMax, int valMin);

int main(void) {
    setbuf(stdout,0);


    int valMax;
    int valMin;

    printf("Insere moi la valeur minimum");
    scanf("%d",&valMin);

    printf("Insere moi la valeur maximum");
    scanf("%d",&valMax);

    confirmation_valeur(valMax,valMin);

}

int confirmation_valeur(int valMax, int valMin) {
    int valeurEval;

    printf("Insere la valeur a evaluer: ");
    scanf("%d",&valeurEval);

    while (valeurEval < valMin || valeurEval > valMax) {
        printf("\nMauvaise valeur, il faut ressayer.\nNouvelle valeur: ");
        scanf("%d",&valeurEval);
    }

    printf("Bonne valeur!: %d",valeurEval);
    return valeurEval;
}

#endif EXERCICE

/****************************************************************************************/

#if EXERCICE == 8

double solde_apres_paiement(double soldeHypo, double paiementMens, double tauxInteret );

int main(void) {
    setbuf(stdout,0);
    double soldeHypo = 500000;
    double paiementMens = 2500;
    double tauxInteret = 0.012;
    int i = 1;

    while (soldeHypo>0) {
    soldeHypo = solde_apres_paiement(soldeHypo, paiementMens, tauxInteret );
        printf("Payement %d\n",i);
        printf("soldeHypo: %lf\n\n", soldeHypo);
        i++;
    }

    }


double solde_apres_paiement(double soldeHypo, double paiementMens, double tauxInteret ) {

    double montantOriginal=soldeHypo;
    double* ptrmontantOriginal = &montantOriginal;

    soldeHypo = soldeHypo / 12; //Paiement par mois

    soldeHypo = soldeHypo * tauxInteret;

    if (*ptrmontantOriginal > 0) {
        montantOriginal = *ptrmontantOriginal -(paiementMens - soldeHypo);
    }

    if (*ptrmontantOriginal <=0) {
        return 0;
    }

    return montantOriginal;
}

#endif EXERCICE

/****************************************************************************************/

#if EXERCICE == 9

double solde_apres_paiement(double soldeHypo, double paiementMens, double tauxInteret );
int relever_compte (double soldeHypo, double paiementMens, double tauxInteret);

int main(void) {
    setbuf(stdout,0);
    double soldeHypo;
    double paiementMens;
    double tauxInteret;

    printf("Entrer le solde d'hypotheque: ");
    scanf("%lf",&soldeHypo);

    printf("Entrer le paiement mensuel: ");
    scanf("%lf",&paiementMens);

    printf("Entrer le taux d'interet: ");
    scanf("%lf",&tauxInteret);

    relever_compte (soldeHypo, paiementMens, tauxInteret);
}

double solde_apres_paiement(double soldeHypo, double paiementMens, double tauxInteret ) {

    double montantOriginal=soldeHypo;
    double* ptrmontantOriginal = &montantOriginal;

    soldeHypo = soldeHypo / 12; //Paiement par mois

    soldeHypo = soldeHypo * tauxInteret;

    if (*ptrmontantOriginal > 0) {
        montantOriginal = *ptrmontantOriginal -(paiementMens - soldeHypo);
    }

    if (*ptrmontantOriginal <=0) {
        return 0;
    }

    return montantOriginal;
}

int relever_compte (double soldeHypo, double paiementMens, double tauxInteret) {

    double montantOriginal= soldeHypo;
    int i = 1;

    double interet = (soldeHypo / 12)*tauxInteret;
    double remboursement = paiementMens - interet;

    printf("\nSolde initiale : %.2lf @ %.2lf%\n",montantOriginal,tauxInteret);
    printf("- - - - - - - - - - - - - - - - - -\n");
    printf("No Mois | paiement | interet | remboursement | Solde\n" );

    while (soldeHypo>0) {

        soldeHypo= solde_apres_paiement(soldeHypo, paiementMens, tauxInteret );

        printf("   %d    | %.2lf | %.2lf  | %.2lf    | %.2lf \n",i,paiementMens,interet,remboursement,soldeHypo);

        interet = (soldeHypo / 12)*tauxInteret;
        remboursement = paiementMens - interet;


        i++;
    }
}

#endif EXERCICE
