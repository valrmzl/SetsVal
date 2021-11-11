#include <stdio.h>
#include "bst.h"
#include "stack.h"

int main() {
    printf("Sets con arboles\n");
    Tree *manzano=newTree();
    add(manzano,7);
    add(manzano,5);
    add(manzano,500);
    add(manzano,6);
    add(manzano,1);
    printTree(manzano);
    printf("\n");
    printf("con iterativo:\n");
    printTreeIter(manzano);


    return 0;
}
