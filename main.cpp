/* ===================================================================== *
 *
 *  Programme tab1.c
 *  Manipulation des elements d'un tableau
 *
 * ===================================================================== */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define TAB_MAX    100
#define TRUE    1
#define FALSE    0

int chercher(int pInt[100], int count, int valeur);

void swap(int pInt[100], int indSwap01, int indSwap02);

void suppression(int pInt[100], int valeur, int count);

void PrintTab(int tab[], int card) {
    int k = 0;

    printf("\n************************************************************\n");
    printf("Nombre d'elements: %d \n", card);

    for (k = 0; k < card; k++)
        printf("tab[%d] = %d, ", k, tab[k]);

    printf("\n************************************************************\n");
}

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

int main(int argc, char *argv[]) {
    int tab[TAB_MAX] = {23, 17, 64, 41, 5, 17, 80};
    int indice, count = 7;
    int valeur, indSwap01, inSwap02;
    char rep[100];

    PrintTab(tab, count);

    while (TRUE) {

        printf("\nIndiquez l'operation a effectuer [Quit/Aff/Cher/Sup/Ins/Ech]: \n");
        scanf("%s", rep);

        switch (rep[0]) {

            case 'q':
            case 'Q':
                exit(0);        /* fin du programme */

            case 'a':
            case 'A':
                PrintTab(tab, count);
                break;

            case 'e':
            case 'E':
                PrintTab(tab, count);
                printf("\nPremière indice = ");
                scanf("%d", &indSwap01);
                printf("\nDeuxième indice = ");
                scanf("%d", &inSwap02);
                swap(tab, indSwap01, inSwap02);
                PrintTab(tab, count);
                break;

            case 'c':
            case 'C':
                printf("\nEntrez la valeur cherchee = ");
                scanf("%d", &valeur);
                indice = chercher(tab, count, valeur);
                if (indice < 0) printf("Valeur non trouvee ! \n");
                else printf("Indice = %d , valeur = %d \n", indice, tab[indice]);
                break;

            case 's':
            case 'S':
                printf("\nEntrez la valeur a supprimer = ");
                scanf("%d", &valeur);
                PrintTab(tab, count);
                indice = chercher(tab, count, valeur);
                if (indice != -1) {
                    suppression(tab, indice, count);
                    count--;
                    PrintTab(tab, count);
                } else {
                    printf("\nLa valeur saisie ne figure pas dans le tableau : %d\n", valeur);
                }
                break;

            case 'i':
            case 'I':
                printf("\nEntrez la valeur a inserer et la position correspondante = ");
                scanf("%d %d", &valeur, &indice);

                /* ....... */

                break;

            default:
                printf("Choix incorrect !\n");
        }
    }
}

void suppression(int *str_input, int valeur, int count) {
    str_input[valeur] = NULL;
    for (unsigned ind = valeur; ind < count; ++ind) {
        int *p1 = &str_input[ind + 1];
        int temp = *p1;
        str_input[ind] = temp;
    }
}

void swap(int *str_input, int indSwap01, int indSwap02) {

    int *p1 = &str_input[indSwap01];
    int *p2 = &str_input[indSwap02];

    int temp = *p1;

    str_input[indSwap01] = *p2;
    str_input[indSwap02] = temp;
}

int chercher(int *str_input, int count, int valeur) {
    for (unsigned ind = 0; ind < count; ++ind) {
        if (str_input[ind] == valeur) {
            return ind;
        }
    }
    return -1;
}
