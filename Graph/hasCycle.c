// 判斷這個圖形有沒有形成環
//環的條件：若拜訪到已拜訪鄰居且這個鄰居不是你的父節點(單一component)
#define N 5
int visited[N]= {0};

bool hasCycle(int graph[N][N],int v,int parent){

    visited[v] = 1;

    for (int i=0;i<N;i++){
        if (graph[v][i]){
            if (!visited[i]){
                if (hasCycle(graph,i,v)){
                    return true;
                }
            }else if (i!=parent){
                return true;
            }
        }
    }
}