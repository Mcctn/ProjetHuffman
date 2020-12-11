//
//  main.c
//  projet Huffman
//
//  Created by Camille Grislin on 06/11/2020.
//  Copyright © 2020 Camille Grislin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#include <string.h>
#include "fonction2.h"



int main(){

    int argc = 0;
    char argv[1000000];
    int  compteur = nb_caractere_fichier_txt(argc, (char**) &argv)-1;
    char lettre = '\0';
    int x;
 
    
    printf("Bonjour, quel programme voulez-vous?\n");
    printf("1-Compteur\n");
    printf("2-Traduction\n");
    printf("3-Occurrence\n");
    
    printf("\n");

    scanf("%d",&x);

    switch(x)
    {
        case 1:
            affichercompteur(compteur);
            break;

        case 2:
            afficher_binaire( lettre, compteur);
            break;
            
        case 3:
            liste_occurrence(compteur);
            break;
            
        default :
            printf("\nCette commande n'existe pas \n");
            break;
    }
    return 0;
}
