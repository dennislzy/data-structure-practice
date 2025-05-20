// bfs 演算法C style

#define N 5
int visited[N];

void BFS(int graph[N][N],int start){
    visited[start] = 1;
    Queue* queue;
    queue->rear =-1;
    queue->front =0;
    enqueue(&queue,start);

    while(!isEmpty(queue)){

        int val = dequeue(&queue);

        printf("%d\n",val);

        for (int i=0;i<N;i++){
            if (graph[val][i] && !visited[i]){
                visited[i] = 1;
                enqueue(&queue,i);
            }
        }
    }
}
