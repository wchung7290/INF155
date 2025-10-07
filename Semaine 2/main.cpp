#include "stdio.h"
#include "math.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
#define EXERCICE 5

#if EXERCICE == 1
int main() {

double poid;
    double age;

    printf("Entrer votre poid en kg: ");
    scanf("%lf",&poid);

    printf("Entrer votre age: ");
    scanf("%lf",&age);

    if (age>=15 && poid >= 40) {
      printf("Droit de saut en parachute!");
    }
    else {
        printf("Interdiction de saut en parachute");
    }
}

#endif

#if EXERCICE ==2

/* Exercice qui consiste de programmer un algorithme
 capable de déterminer le type de triangle a partir de sa longueur*/
int main(void)

{
    setbuf(stdout,0);

    double coordonneeX1 = 0;
    double coordonneeY1 = 0;
    double coordonneeX2 = 0;
    double coordonneeY2 = 0;
    double coordonneeX3 = 0;
    double coordonneeY3 = 0;

    double d1 = 0;
    double d2 = 0;
    double d3 = 0;

    double d1decimale =0;
    double d2decimale =0;
    double d3decimale =0;

    int egal=0;

    printf("Entrer la coordonee 1 (X;Y): ");
    scanf("%lf %lf",&coordonneeX1,&coordonneeY1);

    printf("Entrer la coordonee 2 (X;Y): ");
    scanf("%lf %lf",&coordonneeX2,&coordonneeY2);

    printf("Entrer la coordonee 3 (X;Y): ");
    scanf("%lf %lf",&coordonneeX3,&coordonneeY3);

     d1 = sqrt(pow(coordonneeX3-coordonneeX1,2)+pow(coordonneeY3-coordonneeY1,2)); //Calcul de la distance entre le point 3 et 1
     d2 = sqrt(pow(coordonneeX3-coordonneeX2,2)+pow(coordonneeY3-coordonneeY2,2)); //Calcul de la distance entre le point 3 et 2
     d3 = sqrt(pow(coordonneeX2-coordonneeX1,2)+pow(coordonneeY2-coordonneeY1,2)); //Calcul de la distance entre le point 2 et 1

d1decimale= round(fmod(d1, floor(d1))*100) ; // Pour comparer les décimales et les arrondirs à la centième
    d2decimale= round(fmod(d2, floor(d2))*100);
    d3decimale= round(fmod(d3, floor(d3))*100);

    d1= floor(d1); // Pour la valeur de l'entier
    d2= floor(d2);
    d3= floor(d3);

    if (d1==d2 && d1decimale==d2decimale)  {
        egal++; // Attribuer 1 point à égal pour déterminer le
    }

    if (d1==d3 && d1decimale == d3decimale) {
        egal++;
    }

// Comme les conditions if mais en switch case c'est plus beau
    switch (egal) {
        case 0 :
            printf("triangle scalene");
            break;
        case 1 :
            printf("triangle isocele");
            break;
        case 2:
            printf("triangle equilateral");
    }

}
#endif

#if EXERCICE == 3


int main(void) {
    setbuf(stdout,0);
    int
    nb;
    printf("Saisir le nombre de fois tu veux sa affiche");
    scanf("%d",&nb);

    while (nb>0) {
        printf("Bravo !!!\n");

        nb=nb-1;
    }

system("pause");
}
#endif

#if EXERCICE ==4
int main(void){

    int valeurMax;
    int valeurMin;

    printf("Insere moi une borne max et je vais afficher tous les nombre pairs");
    scanf("%d",&valeurMax);

    for (valeurMin = 0; valeurMin < valeurMax; valeurMin++) {

        if ((valeurMin % 2) == 0) {
            printf("%d\n",valeurMin);
        }
    }

}
#endif

#if EXERCICE ==5
int main(void) {

    int nombreAnalyser;
    int diviseur;

printf("Entrer le nombre a analyser: ");
    scanf("%d", &nombreAnalyser);

    for (diviseur=1;diviseur<nombreAnalyser;diviseur++) {
        if ((nombreAnalyser%diviseur)==0) {
            printf("%d est un diviseur de %d\n",diviseur,nombreAnalyser);
        }

    }

}
#endif

#if EXERCICE  ==6

int main(void) {
    int valeurAnalyser;
    int diviseur;
    int comptPremier = 0;

    printf("Insere moi une valeur est je vais determiner si elle est premiere: ");
    scanf("%d",&valeurAnalyser);

    for (diviseur=1;diviseur<=valeurAnalyser;diviseur++) {
        if ((valeurAnalyser % diviseur)==0) {
            comptPremier++;
        }
    }

    if (comptPremier == 2) {
    printf("%d est un nombre premier", valeurAnalyser);

    }
    else {
        printf("%d n'est pas un nombre premier", valeurAnalyser);
    }

}
#endif

#if EXERCICE  ==7
int main(void) {

}
#endif

#if EXERCICE  ==8

int main(void) {
    setbuf(stdout,0);
    int entier= 0;
    int digit = 0;
    int occurence = 0;
    printf("Insere moi l'entier a analyser");
    scanf("%d",&entier);

    printf("Insere moi le digit a trouver");
    scanf("%d",&digit);

        while (entier>0) {
            if ((entier % 10)==digit) {
                occurence++;
            }
            entier/=10;
        }

    printf("Il y a %d occurence de %d dans l'entier insere",occurence,digit);
}
#endif

#if EXERCICE ==9

int main(void) {
#define GRAVITE 9.81

    setbuf(stdout,0);
    int somme = 0;
    int entier;
    int entier2 = 0 ;

    printf("Insere moi l'entier");
    scanf("%d",&entier);

while (entier2!=entier) {


    entier2 = entier;

    while (entier>0) {
        somme= somme + (entier%10);
        entier/=10;
        if (entier==0) {
            printf("%d\n",somme);
        }
    }

    entier=somme;
    somme = 0;
}
/*while (entier>0) {
    if (entier == 0 && somme >9) {
        entier=somme;
        somme=0;
    }
    while (entier>0) {
        somme= somme + (entier%10);
        entier/=10;
    }
    printf("%d\n",somme);
}
*/
}

#endif

#if EXERCICE ==10
int main(void) {
    double k = 0;
    double somme = 0;
    double somme2=1;
    double pi;
    double valeurstock;
    double pi2;

    while ((abs(pi2)) - abs(pi)>0.00001)
        {

        pi2 = pi;

        somme = (2 * k +2) / (2*k+1);
        somme2 = (2*k+2) / (2*k+3);

        pi *= somme*somme2;

        valeurstock=somme; // Pour changer de position les sommes
        somme = somme2;
        somme2=valeurstock;

        k++;
    }
    printf("pi = %lf", pi);
}
#endif
