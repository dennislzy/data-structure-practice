//依照值得大小合并兩個串列
#include <cstddef>
typedef struct Nodes{
    int val;
    Nodes* next;
} Nodes;

Nodes* mergeTwoLinklist(Nodes* nodes1,Nodes* nodes2){
    if (nodes1 == NULL && nodes2 == NULL){
        return NULL;
    }
    if (nodes1 == NULL && nodes2 != NULL){
        return nodes2;
    }
    if (nodes1 != NULL && nodes2 == NULL){
        return nodes1;
    }
    struct Nodes dummy;
    struct Nodes* tail = &dummy;

    while (nodes1!=NULL && nodes2!=NULL){
        if (nodes1->val<=nodes2->val){
            tail->next = nodes1;
            nodes1= nodes1->next;
        }else{
            tail->next = nodes2;
            nodes2 = nodes2->next;
        }
        tail = tail->next; //推進下一個
    }

    while (nodes1!=NULL)
    {
        tail->next = nodes1;
        nodes1= nodes1->next;
        tail = tail->next;
    }
    while (nodes2!=NULL)
    {
        tail->next = nodes2;
        nodes2= nodes2->next;
        tail = tail->next;
    }
    return dummy.next; //回傳dummy下一個節點
}