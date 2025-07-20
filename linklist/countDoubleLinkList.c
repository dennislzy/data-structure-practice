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

int findHub(int graph[N][N]) {
    int maxConnections = 0;
    int hubIndex = 0;
    
    for (int i = 0; i < N; i++) {
        int connections = 0;
        for (int j = 0; j < N; j++) {
            if (graph[i][j] == 1) {
                connections++;
            }
        }
        if (connections > maxConnections) {
            maxConnections = connections;
            hubIndex = i;
        }
    }
    return hubIndex;
}