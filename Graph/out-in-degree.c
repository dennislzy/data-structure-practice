//在有向圖中，計算每個節點内，外分支度

#define N 5
int in_degree[N] = {0};
int out_degree[N] = {0};

void countDegree(int graph[N][N]){

    for (int i=0;i<N;i++){

        for (int j=0;j<N;j++){

            if (graph[i][j]){
                out_degree[i]++;
                in_degree[j]++;
            }
        }
    }
}