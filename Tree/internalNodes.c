//計算内部節點個數
#include <cstddef>
typedef struct Nodes
{
    int val;
    Nodes* left;
    Nodes* right;
} Nodes;
void countInternalNodes(Nodes* node,int* count){
    if (node == NULL){
        return;
    }
    if (node->left!=NULL || node->right!=NULL){
        *count+=1;
    }
    countInternalNodes(node->left,count);
    countInternalNodes(node->right,count);
}

