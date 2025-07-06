//刪除指定值的節點
#include <cstddef>
typedef struct Nodes{
    int val;
    Nodes* next;
} Nodes;

Nodes* deleteList(Nodes* nodes,int val){
    if (nodes == NULL){
        return NULL;
    }
    // 刪除頭節點
    while (nodes!=NULL && nodes->val == val){
        Nodes* temp = nodes;
        nodes = nodes->next;
        free(temp);
    }
    Nodes* cur = nodes;
    while (cur!=NULL && cur->next!=NULL){
        if (cur->next->val == val){
            Nodes* temp = cur->next;
            cur->next = cur->next->next;
            free(temp); //釋放節點
        }else{
            cur = cur->next; // 下一個節點
        }
    }
    return nodes;
}

//刪除尾巴節點（遞歸版本）
Nodes* deleteLinkList(Nodes* head){
    if (head == NULL){
        return NULL;
    }
    if (head->next == NULL){
        free(head);
        return NULL;
    }
    if (head->next->next == NULL){
        free(head);
        head->next = NULL;
        return head;
    }
    head->next = deleteLinkList(head->next);
    return head;
}