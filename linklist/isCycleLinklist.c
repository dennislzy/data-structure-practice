//判斷這個linklist有沒有形成環
#include <cstddef>
typedef struct Nodes{
    int val;
    Nodes* next;
} Nodes;

bool isCycle(Nodes* nodes){
    if (nodes == NULL){
        return false;
    }
    Nodes* fast = nodes;
    Nodes* slow = nodes;
    while (fast!=NULL && fast->next !=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow){
            return true;
        }
    }
    return false;
}