//
// Created by root on 25/09/22.
//

#include <clocale>
#include "function.h"

void insertion(int *str_input, int valeur, int count) {
    int *p1 = &str_input[count];
    *p1 = valeur;
    int temp = *p1;
    str_input[count] = temp;
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