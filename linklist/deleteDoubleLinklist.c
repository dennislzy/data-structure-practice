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
            //如果要刪掉的節點只有一個
            if (cur->next == cur && cur->val == target){
                return NULL;
            }
            //修正指標
            cur->prev->next = cur->next;
            cur->next->prev = cur->prev;
            //刪掉為頭節點則移動head
            if (cur == head){
                head = head->next;
            }
            cur->prev = NULL;
            cur->next = NULL;
        }else{
            cur = next;
        }
    } while (cur!=head);
    return head;
}