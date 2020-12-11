/*****************************************************************//**
 * \file   fonction2.h
 * \brief  Ajout de la fonction2.h .
 * 
 * \author MARTIN CORNEN
 * \date   December 2020
 *********************************************************************/



#ifndef fonction2_h
#define fonction2_h

#include <stdio.h>

typedef struct element{
    char data;
    struct element* next;
    int occ;
}element;
typedef element* liste;


///création structure noeud///
 typedef struct Noeud{

     int lettre;
     char data;
     struct Noeud* droite;
     struct Noeud* gauche;

  } Noeud;
  typedef Noeud* arbre;

  ///creation structure liste///
  typedef struct Element{
      int occ2;
      char data2;
      struct Element* suiv;
 
  }Element;
  typedef Element* Liste;


element* liste_occurrence( int n);

element* listeclassee(element* list);
int minListe(element *liste);

void list_supp_min( int x, int y);
arbre add_noeuds(Noeud* triliste);
Noeud* creer_noeud(int val);
Noeud* creer_noeud1(int val,element* l);
void triliste (Liste *liste_occurence);


#endif /* fonction2_h */
