//計算點A到點B有沒有路徑可走

#define N 5
int visited[N];
bool hasPath(int graph[N][N],int a,int b){
    visited[a] = 1;
    if (a == b){
        return true;
    }
    for (int i=0;i<N;i++){
        if (graph[a][i] && !visited[i]){
            if (hasPath(graph,i,b)){
                return true;
            }
        }
    }
    return false;
}