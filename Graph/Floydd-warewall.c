// Floydd-warewall 演算法

void floydd(int graph[N][N]){

    for (int i=0;i<N;i++){

        for (int j=0;j<N;j++){

            for (int k=0;k<N;k++){
                if (graph[i][j]>graph[i][k]+graph[k][j]){
                    graph[i][j] = graph[i][k]+graph[k][j];
                }
            }
        }
    }
}