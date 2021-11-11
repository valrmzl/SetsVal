//
// Created by luax2 on 06/11/2021.
//

#ifndef SETS_BST_H
#define SETS_BST_H

typedef struct node Node;
typedef struct tree Tree;

Tree *newTree();

Node *newNode(int n);


void add(Tree *tree, int n);

void printTreeRec(Node *root);

void printTree(Tree *tree);
void printTreeIter(Tree *tree);

#endif //SETS_BST_H
