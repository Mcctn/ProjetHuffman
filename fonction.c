//
// Created by martin on 03/12/2020.
//


#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"


int nb_caractere_fichier_txt(int argc, char * argv[]) {

    int compteur = 0;
    FILE * file = NULL ;


    if ((file = fopen("Alice.txt", "r")) == NULL){
        printf("Erreur a l'ouverture du fichier");
    }
    else {

        while(fgetc(file) != EOF){
            compteur ++;

        }

        printf("Le nombre de caracteres du fichier est de : %d\n", compteur+1);


        fclose(file);

        return compteur;

    }
}







int liste_occurences(element* l, int n){
    int c, yes;
    char tableau [1000], lettre;
    FILE * file = NULL;
    file = fopen ("Alice.txt", "r");

    fgets(tableau, 1000, file);


    for (int i = 0; i<n ; i++){
        c=0;
        for (int j = 0; j<n; j++){
            if (tableau[i] == tableau[j]){
                c++;
            }
        }
        lettre = tableau[i];
        printf("l'element %c apparait %d fois! \n", lettre,c);
    }

    return 0;
    fclose(file);
}


void printBina(char lettre, int* compteur)
{

    //printf("%d", &compteur);
    FILE *fichier_lecture ;
    FILE *fichier_ecriture;

    int i,j,deci,bin[8],tabx[8],cpt=0;
    int l;
    int txt=0;
    i=0;
    int calc;

    fichier_lecture = fopen ("Alice.txt", "r");
    fichier_ecriture = fopen("Output.txt", "w+");

    if (fichier_lecture==NULL){
        printf("Erreur a l'ouverture");
    }
    else {
        for (i=0; i<compteur; i++){
            l=0;
            calc=1000000;
            txt=0;


            lettre = fgetc(fichier_lecture);
            deci = lettre;              // deci variable qui prend la valeur decimale de la lettre
            for(j=0; deci > 0; j++)
            {
                bin[j] = deci%2;        // la chaine bin (chaine de 8 nombre permettant la création du 8-bits) prend la valeur de deci modulo 2
                deci = deci/2;          // division pour passer sur "le bit suivant"
                cpt=cpt+1;            // utile pour etre sur qu on a bien 8-bits
            }
            for (j=cpt; j<8;j++){
                bin[j]=0;//compléter pour qu il y ait 8-bits
            }
            for (j=cpt; j<8;j++){
                tabx[j]=0;//compléter pour qu il y ait 8-bits
            }

            for (j=7;j>=0;j--){
                tabx[l]=bin[j];
                l++;

            }

            for (j=1;j<8;j++){

                txt=txt+tabx[j]*calc;
                calc=calc/10;


            }
            fprintf(fichier_ecriture,"0%d\n ",txt);
            printf("0%d",txt);
            printf ("  ");
        }


    }


    printf("Il y a : %d characteres",compteur); // PENSE A ENLEVER A LA FIN
    fclose(fichier_lecture);
    fclose(fichier_ecriture);

}

int test(int argc, char *argv[])
{
    FILE* fichier = NULL;

    fichier = fopen("test.txt", "a+");

    if (fichier != NULL)
    {
        fputs("S Zér0s\nComment allez-vous ?", fichier);
        fclose(fichier);
    }
    else{
        printf("erreur");
    }
    return 0;
}

