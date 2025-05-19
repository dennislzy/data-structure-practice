//計算外部節點個數
#include <cstddef>
typedef struct Nodes
{
    int val;
    Nodes* left;
    Nodes* right;
} Nodes;
int countExternalNodes(Nodes* nodes){
    if (nodes == NULL){
        return 0;
    }

    if (nodes->left == NULL && nodes->right == NULL){
        return 1;
    }
    return countExternalNodes(nodes->left) + countExternalNodes(nodes->right);
}