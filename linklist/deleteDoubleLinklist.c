//計算雙向環狀連結串列縂節點數
#include <cstddef>
typedef struct DoubleNodes{
    int val;
    DoubleNodes* prev;
    DoubleNodes* next;
} DoubleNodes;

DoubleNodes* deleteDoubleLinkList(DoubleNodes* head,int target){
    if (head == NULL){
        return NULL;
    }
    DoubleNodes* cur = head;
    do
    {
        DoubleNodes* next = cur->next;
        if (cur->val == target ){
            if (cur->next == cur && cur->val == target){
                return NULL;
            }
            cur->prev->next = cur->next;
            cur->next->prev = cur->prev;
            if (cur == head){
                head = head->next;
            }
            cur->prev = NULL;
            cur->next = NULL;
        }
        cur = next;
    } while (cur!=head);
    return head;
}