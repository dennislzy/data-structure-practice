//交換數左右兩邊的節點
#include <cstddef>
typedef struct Nodes
{
    int val;
    Nodes* left;
    Nodes* right;
} Nodes;

Nodes* swapTreeNodes(Nodes* nodes){
    if (nodes == NULL){
        return NULL;
    }

    Nodes* temp = nodes->left;
    nodes->left = nodes->right;
    nodes->right = temp;
    swapTreeNodes(nodes->left);
    swapTreeNodes(nodes->right);
    return nodes;
}