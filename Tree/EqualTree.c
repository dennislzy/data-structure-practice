//判斷兩顆數是否相等
#include <cstddef>
typedef struct Nodes
{
    int val;
    Nodes* left;
    Nodes* right;
} Nodes;

bool isEqual(Nodes* nodesLeft,Nodes* nodesRight){
    if (nodesLeft == NULL && nodesRight == NULL){
        return true;
    }

    if (nodesLeft == NULL || nodesRight == NULL){
        return false;
    }

    return (nodesLeft->val == nodesRight->val) && 
    isEqual(nodesLeft->left,nodesRight->left)
    && isEqual(nodesLeft->right,nodesRight->right)
    ;
}