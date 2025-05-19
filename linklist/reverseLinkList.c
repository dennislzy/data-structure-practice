//反轉link list
#include <cstddef>
typedef struct Nodes{
    int val;
    Nodes* next;
} Nodes;

Nodes reverseLinkList(Nodes nodes){
    if (nodes == NULL){
        return NULL;
    }

    Nodes prev = NULL;
    Nodes cur = nodes;

    while (cur!=NULL){
        Nodes next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return nodes;
}