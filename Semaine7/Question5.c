#include <stdio.h>
#include <ctype.h>

#define TAILLE 30

int bonhommePendu(char mot[]);


int main(void) {
    setbuf(stdout, 0);
    char mot[] = "buffet-chinois";

    bonhommePendu(mot);
}

int bonhommePendu(char mot[]) {
    char motcache[TAILLE];
    int vie = 9;
    int i = 0;
    char lettre;
    int nbtotal = 0;
    int trouve = 0;

    while (mot[i] != '\0') {

        motcache[i] = '*';
        i++;
        nbtotal++;
    }

    do {
        printf("\nmot cache : %s\n", motcache);
        printf("Nombre de vie actuel : %d\n", vie);
        printf("Insere moi la prochaine lettre: ");

        scanf(" %c", &lettre);

        i = 0;

        while (mot[i] != '\0') {
            if (toupper(mot[i]) == toupper(lettre) && toupper(motcache[i]) != toupper(lettre)) {
                motcache[i] = lettre;
                trouve = 1;
                nbtotal--;

            }

            else if (toupper(mot[i]) == toupper(lettre) && toupper(motcache[i]) == toupper(lettre)) {
                printf("\nEssaye une autre lettre");
                trouve = 1;
            }
            i++;
        }

        if (trouve ==0) {
            vie--;
        }

        trouve =0;

    } while (nbtotal > 0 && vie > 0);

    if (vie <=0) {
        printf("\nTu as perdu le mot est : %s",mot);
    }

    else if (vie >= 0) {
        printf("\nFecilitation le mot etait %s",mot);
    }

    return vie;
}
