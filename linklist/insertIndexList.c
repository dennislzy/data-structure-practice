// 加入節點到指定索引
#include <cstddef>
typedef struct Nodes{
    int val;
    Nodes* next;
} Nodes;

Nodes insertLinkList(struct Nodes nodes,int index){

    Nodes* cur = nodes;

    Nodes* insertNodes =(Nodes*)malloc(sizeof(Nodes));
    insertNodes->val = 1;
    insertNodes->next = NULL;

    if (index ==0){
        insertNodes->next = cur;
        return insertNodes;
    }

    for (int i=0;i<index-1 && cur!=NULL;i++){

        cur = cur->next;
    }

    Nodes* next = cur->next;
    cur->next = insertNodes;
    insertNodes->next = next;
    return nodes;
}