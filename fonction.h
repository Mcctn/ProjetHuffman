//
// Created by martin on 03/12/2020.
//

#ifndef PJ3_FONCTION_H
#define PJ3_FONCTION_H

typedef struct element{

    int data;
    struct element * next;

}element;

typedef element* l;

int nb_caractere_fichier_txt(int argc, char * argv[]);
void IntToBin(int n, char p);
int printBin(char a_bChar);
void transformation_binaire(int argc, char argv);
int liste_occurences(element *l,int n);
void printBina(char lettre, int * compteur);
int test(int argc, char *argv[]);



#endif //PJ3_FONCTION_H
