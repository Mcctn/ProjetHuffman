//
//  occurrence.h
//  squeletteHuffman
//
//  Created by Camille Grislin on 08/12/2020.
//

#ifndef occurrence_h
#define occurrence_h

#include <stdio.h>
typedef struct element{
    int data;
    struct element* next;
    int occ;
}element;
typedef element* liste;

element* liste_a_partir_dun_tableau( int n);

#endif /* occurrence_h */
