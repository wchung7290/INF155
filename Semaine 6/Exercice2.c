        #include <stdio.h>
        #include <stdlib.h>
        #include <ctype.h>

        #define TAILLE_TAB 40
        int positionChaine(unsigned char chaine [], unsigned char valRecherche);

        int main(void) {

            int position;

            unsigned char chaine[TAILLE_TAB] = "abcdefghijklmnopqrst";

            position = positionChaine(chaine, 'G');

            printf("position = %d\n", position);

        }

        int positionChaine(unsigned char chaine [], unsigned char valRecherche) {

            int i = 0;

            while (chaine[i] != '\0') {
                if (chaine[i] == toupper(valRecherche) || chaine[i] == tolower(valRecherche)) {

                    return i;
                }
                i++;
            }
            return -1;
        }

