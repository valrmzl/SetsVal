//
// Created by luax2 on 06/11/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "Sets.h"
#include "stack.h"


struct node
{
    int value;
    Node *left;
    Node *right;
};


struct tree
{
    Node *root;
};


Tree *newTree()
{
    Tree *newTree=malloc(sizeof(Tree));
     newTree->root=NULL;
    return newTree;
}

Node *newNode(int n)
{
    Node *nodo= malloc(sizeof(Node));
    nodo->value=n;
    nodo->left=NULL;
    nodo->right=NULL;
    return nodo;
}

void add(Tree *tree, int n)
{
    if(tree->root==NULL){
        tree->root= newNode(n);
        return;
    }

    Node *current=tree->root;
    while(current->value!=n)
    {
        if(n<current->value)
        {
            if(current->left==NULL)
            {
                current->left= newNode(n);
                return;
            }
            current=current->left;
        }
        if(n>current->value)
        {
            if(current->right==NULL)
            {
                current->right= newNode(n);
                return;
            }
            current=current->right;
        }
    }
}

void printTreeRec(Node *currentNode)
{
    if(currentNode==NULL)
        return;

    printTreeRec(currentNode->left);
    printf("[%d] ",currentNode->value);
    printTreeRec(currentNode->right);
}


void printTree(Tree *tree)
{
    printTreeRec(tree->root);
}


void printTreeIter(Tree *tree)
{
    STACK *toVisit=newStack();
    Node *current=tree->root;

    while(peek(toVisit)!=NULL || current)
    {
        while (current!=NULL)
        {
            push(toVisit,current);
            current=current->left;
        }
        current= pop(toVisit);
        printf("[%d] ",current->value);
        current=current->right;
    }
}



