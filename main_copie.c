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



int main(){

    int argc = 0,y;
    char argv[1000000];
    int  *compteur;
    char lettre;
    int l;
    

//    *p = tab[8];//8 bits doivent suffirent
    int x;

    printf("1-Partie 1\n");
    printf("2-Partie 2\n");
    printf("3-Partie 3\n");
    printf("4-Partie 4\n");
    printf("5-Partie 5\n");
    printf("\n");

    scanf("%d",&x);

    switch(x)
    {
        case 1:
            compteur = nb_caractere_fichier_txt(argc, &argv);
            printBina( lettre, compteur);
            return 0;

            break;

        case 2:

            nb_caractere_fichier_txt(argc, &argv);

            break;
        
        case 3:
            transformation_binaire(argc, &argv);
            return 0;
            
        case 4:
            printBin1(argc, argv);
            break;
            
        case 5:
            liste_occurences(l, 104);
            
            
       
    }
}
