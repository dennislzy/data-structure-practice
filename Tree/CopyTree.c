//複製一棵樹
#include <cstddef>
#include <stdlib.h>  // 加上這個才有 malloc
typedef struct Nodes
{
    int val;
    Nodes* left;
    Nodes* right;
} Nodes;

Nodes* copyTree(Nodes* nodes){
    if (nodes == NULL){
        return NULL;
    }

    Nodes* copyNodes = malloc(sizeof(Nodes));
    copyNodes->val = nodes->val;
    copyNodes->left = copyTree(nodes->left);
    copyNodes->right = copyTree(nodes->right);
    return copyNodes;
}