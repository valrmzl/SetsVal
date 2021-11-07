//
// Created by luax2 on 06/11/2021.
//

#ifndef SETS_SETS_H
#define SETS_SETS_H

typedef struct node Node;
typedef struct tree Tree;

Tree *newTree();

Node *newNode(int n);


void add(Tree *tree, int n);

void printTreeRec(Node *root);

void printTree(Tree *tree);

#endif //SETS_SETS_H
