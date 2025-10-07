#include <stdio.h>

void afficher_addresse (int variable);

int main(void) {

int ma_var;

    afficher_addresse (ma_var);

}

void afficher_addresse (int variable) {

    printf("Addresse : %p",&variable);
}