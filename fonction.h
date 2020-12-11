/*****************************************************************//**
 * \file   fonction.h
 * \brief  Ajout du .h des fonctions de la parties 1.
 * 
 * \author MARTIN CORNEN
 * \date   December 2020
 *********************************************************************/

//
//  fonction.h
//  projet Huffman
//
//  Created by Cam's et Martin <3 on 10/11/2020.
//  Copyright © 2020 Camille Grislin. All rights reserved.
//

#ifndef fonction_h
#define fonction_h
#include <stdio.h>
#define Taille_max 100000

int nb_caractere_fichier_txt(int argc, char * argv[]);
void affichercompteur(int compteur);
void afficher_binaire(char lettre, int compteur);

#endif /* fonction_h */
