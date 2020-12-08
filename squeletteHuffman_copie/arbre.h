//
//  arbre.h
//  squeletteHuffman
//
//  Created by Camille Grislin on 08/12/2020.
//

#ifndef arbre_h
#define arbre_h

#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef Node* Tree;

#endif /* arbre_h */
