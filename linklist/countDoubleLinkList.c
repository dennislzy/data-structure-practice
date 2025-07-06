//計算雙向環狀連結串列縂節點數
#include <cstddef>
typedef struct DoubleNodes{
    int val;
    DoubleNodes* prev;
    DoubleNodes* next;
} DoubleNodes;
int countDoubleNodes(DoubleNodes* doubleNodes){
    DoubleNodes* cur = doubleNodes;
    if (doubleNodes == NULL){
        return 0;
    }
    int count =0;
    do{
        count++;
        cur = cur->next;
    }while(cur!=doubleNodes);
    return count;
}
