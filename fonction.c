/*****************************************************************//**
 * \file   fonction.c
 * \brief  Ajout des fonctions de la partie 1.
 * 
 * \author MARTIN CORNEN
 * \date   December 2020
 *********************************************************************/

//
//  fonction.c
//  projet Huffman
//
//  Created by Camille Grislin on 10/11/2020.
//  Copyright © 2020 Camille Grislin. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "fonction.h"


int nb_caractere_fichier_txt(int argc, char * argv[]) {

    int compteur = 0;
    FILE * file;

/* ouverture du fichier */
    if ((file = fopen("Alice.txt", "r")) == NULL){
        printf("Erreur a l'ouverture du fichier");
    }
    else {
// parcours du fichier
        while(fgetc(file) != EOF){
            compteur ++; // incrÈmentation du compteur
    }

// fermeture du fichier
    fclose(file);


    }
    return compteur;
}


void affichercompteur(int compteur)
{
     printf("\n Le nombre de caracteres du fichier est de : %d\n", compteur );
}


void afficher_binaire(char lettre, int compteur)
{
    FILE *fichier_lecture ;
    FILE *fichier_ecriture;

    int i,j,deci,bin[8],tabx[8],cpt=0;
    int l;
    int txt=0;
    i=0;
    int calc;

    fichier_lecture = fopen ("Alice.txt", "r");
    fichier_ecriture = fopen("/Users/cam/Documents/TD 2 SDD/projet HUFFMAN 2.0/projet HUFFMAN 2.0/Output.txt", "w+");

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
                deci = deci/2;         // division pour passer sur "le bit suivant"
                cpt=cpt+1;             // utile pour etre sur qu on a bien 8-bits
            }
            for (j=cpt; j<8;j++){
                bin[j]=0;             //compléter pour qu il y ait 8-bits
            }
            
            for (j=cpt; j<8;j++){
                tabx[j]=0;
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

    fclose(fichier_lecture);
    fclose(fichier_ecriture);

}
