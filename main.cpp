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
#include "function.h"

#define TAB_MAX    100
#define TRUE    1
#define FALSE    0


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
    int valeur, indSwap01, indSwap02;
    char rep[100];

    PrintTab(tab, count);

    while (TRUE) {

        printf("\nIndiquez l'operation a effectuer [Quit/Aff/Cher/Sup/Ins/Ech]: ");
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
                if (indSwap01 > count) {
                    printf("\nIndice supérieur au nombre de cellule du tableau \n");
                } else {
                    printf("\nDeuxième indice = ");
                    scanf("%d", &indSwap02);
                    if (indSwap02 > count) {
                        printf("\nIndice supérieur au nombre de cellule du tableau \n");
                    } else {
                        swap(tab, indSwap01, indSwap02);
                        PrintTab(tab, count);
                    }
                }
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
                for (unsigned ind = 0; ind < count; ++ind) {
                    indice = chercher(tab, count, valeur);
                    if (indice != -1) {
                        suppression(tab, indice, count);
                        count--; //todo   count-- dans la fonction
                        PrintTab(tab, count);
                    }
                }
                break;

            case 'i':
            case 'I':
                printf("\nEntrez la valeur a inserer = ");
                scanf("%d", &valeur);

                if (count == 7) {
                    printf("\nInsertion impossible => tableau plein\n");
                } else {
                    indice = chercher(tab, count, valeur);
                    if (indice == -1) {
                        insertion(tab, valeur, count);
                        count++;
                        PrintTab(tab, count);
                    }
                }
                break;

            default:
                printf("Choix incorrect !\n");
        }
    }
}

