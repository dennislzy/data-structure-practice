// dfs 演算法C style

#define N 5
int visited[N];

void dfs(int graph[N][N],int start){

    visited[start] = 1;
    printf("%d\n",start);
    for (int i=0;i<N;i++){
        if (graph[start][i] && visited[i]!=1){
            dfs(graph,i);
        }
    }
}