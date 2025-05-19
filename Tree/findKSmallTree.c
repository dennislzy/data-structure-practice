//在二元樹找出第k小的數字 (找出第k大用反中序遍歷)
#include <cstddef>
typedef struct Nodes
{
    int val;
    Nodes* left;
    Nodes* right;
} Nodes;

int findKSmallTree(Nodes* nodes,int k,int* result){
    if (nodes == NULL){
        return -1;
    }
    int left = findKSmallTree(nodes->left,k,result);
    if (left !=-1){
        return left;
    }
    *result+=1;
    if (*result == k){
        return nodes->val;
    }
    int right = findKSmallTree(nodes->right,k,result);
    return right;
}