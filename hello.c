#include<stdio.h>
#include<stdlib.h>

int main(int argv, char ** argc) {
    char point = '.';
    char str[81];
    char strSpace[81];
    int i;
    int j;
    int cpt = 0;

    //Saisir une phrase
    fflush(stdin);
    gets(str);

    //Parcourir le tableau
    for (i = 0; i < 81; i++) {
        if (str[i] == '  ') { //Si le tableau contient deux espaces (car le premier espace n'est pas pris en compte)
            cpt++;
        }
    }
    for (j = 0; j < cpt; j++) {
        strSpace[j] = ' ';

    }
    for (j = cpt + 1; j < 81 - cpt; j++) {
        strSpace[j] = str[i];
    }
    return 0;
}
