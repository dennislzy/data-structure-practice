// 計算這個圖有多少個component

#define N 5
int visited[N]= {0};

int countComponent(int graph[N][N]){
    int count =0;
    for (int i=0;i<N;i++){
        if (!visited[i]){
            dfs(graph,i);
            count++;
        }
    }
    return count;
}

void dfs(int graph[N][N],int start){
    visited[start] = 1;

    for (int i=0;i<N;i++){
        if (graph[start][i] && !visited[i]){
            dfs(graph,i);
        }
    }
}