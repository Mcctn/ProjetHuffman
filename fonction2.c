/*****************************************************************//**
 * \file   fonction2.c
 * \brief  Ahout des fonctions de la deuxième partie.
 *      \n fonction
 *      \code{.c}
 *      element* liste_occurrence();
 *      \endcode
 * 
 * 
 * \author MARTIN CORNEN
 * \date   December 2020
 *********************************************************************/

//
//  fonction2.c
//  projet HUFFMAN 2.0
//
//  Created by Camille Grislin on 10/12/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "fonction2.h"

/**
 * faire une liste de toutes les occurences.
 * \return le nb occ
 */
element* liste_occurrence( int n){

    char tableau [1000];
    FILE * file = fopen ("Alice.txt", "r");

    fgets(tableau, 1000, file);
    if(n == 0){
        return 0;
    }
    element * l=(element*)malloc(sizeof(element));

    (l->data)=tableau[0];
    int c=0;
    for(int k=0;k<=n;k++){
        if(tableau[0]== tableau[k]){
        c++;
        }
    }
    l->occ=c;
    element *temp=l;

    for (int i=1;i<n;i++){
            int j=0;

            while ( j !=i){

                if(tableau[i]==tableau[j]){
                    j=i;
                }
                if (j==i-1){
                    temp->next= (element*)malloc(sizeof(element));
                    temp->next->data=tableau[i];

                    int c=0;
                    for (int k = 0; k<=n; k++){
                        if (tableau[i] == tableau[k]){
                               c++;
                            }
                        }
                        temp->next->occ=c;
                        temp=temp->next;

                    j=i;
                }

                if (j!=i){
                    j=j+1;
                }
            }
       }

    temp->next=NULL;

    while(l!=NULL)
    {
       printf(" %c  apparrait %d fois\n",l->data, l->occ);

        l=l->next;
    }

    return l;
}







int minListe(element *liste){
    element *temp=liste;
    int min=liste->occ;
    while (temp!=NULL ) {
        if(temp->next->occ < min){
              min = temp->next->occ;
    }
        temp = temp->next;
    }
    return min;
}


element* listeclassee(element* l){
    if(l == 0){
        return 0;
        
    }
        
        int b_next = 0;
        liste buffer = l;
       
            buffer =l;
            while(buffer->next != 0)
            {
                if(buffer->data > buffer->next->data)
                {
                    b_next = buffer->next->data;
                    buffer->next->data = buffer->data;
                    buffer->data = b_next;
                    
                }
                else
                {
                    buffer = buffer->next;
                }
            }
        
    return l;
}



/*Creation d'une liste */

Liste creer_el(int nouv_info){

    Liste nouv_elem;
    nouv_elem = malloc(sizeof(Element));
    nouv_elem->occ2 = nouv_info;
    nouv_elem->suiv = NULL;
    return nouv_elem;
}

Liste creer_liste(int n){

    if ( n<=0 ){
        return NULL;
    }
    else{
        Element* nouv_elem = creer_el(n);
        nouv_elem->suiv = creer_liste(n - 1);
        return nouv_elem;
    }
}

/*fonction de permutation pour le tri de la liste d'occurence*/
void permut(Element *a, Element *b){

   Element *tmp; //variable temporaire pr permuter a et b

    tmp = a;
   *a = *b;
    *b = *tmp;

}

/*fonction de tri pour la liste d'occurence*/
void triliste (Liste *liste_occurence)  //e: tête de la liste
{
   Element *i, *j ;
    Element *e = NULL;

    for (i=e; i != NULL; i = i->suiv){

        for(j=i->suiv; j!=NULL; j=j  -> suiv){

         if(i->data2 > j->data2){

            permut(i,j);
            e->data2 = j ;
          }
      }
   }

}


   ///Isoler élément avec un une occurence dans un noeud

       /*creation d'un noeud vide*/

Noeud* creer_noeud(int val){
    Noeud* nvx_noeud = malloc(sizeof(Noeud));
    Element* e = NULL;
        // extraction des occurences = 1
    if (e->data2 == 1 ){  //si le minimum de la liste triliste est 1 alors on met la donnée dans un noeud a part
        nvx_noeud->data = e->data2;
        nvx_noeud->gauche = NULL;
        nvx_noeud->droite = NULL;
        
      }
    return nvx_noeud;
}


  

      

         ///Creer un noeud vide:valeur->addition gauche et droite, gauche-> occ min , droite-> 2eme occ min
Noeud* creer_noeud1(int val, element* l){
    Element*e = NULL;
    Noeud* nvx_noeud2 = malloc(sizeof(Noeud));
    nvx_noeud2 ->gauche = e->data2;
    nvx_noeud2 ->droite = e->suiv->data2;
    return nvx_noeud2;
              
}

          ///suppression des deux minimum de trilist et ajouter somme ds liste occurence
void list_supp_min( int x, int y){
    Element* e = NULL;
    if(x==0 || y==0){
        return;
        
    }
    else{
        Liste buffer = e->data2;
        free(buffer);

    }

}
