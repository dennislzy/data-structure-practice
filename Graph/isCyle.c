// 判斷加入一個邊后會不會形成Cycle
#include <stdio.h>
#define N 100
int parent[N];

void init(int n){

    for (int i=0;i<n;i++){
        parent[i] = i;
    }
}

//找祖先
int find(int x){
    if (parent[x]!=x){
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

//聯集
void unionSet(int x,int y){

    int rootX = find(x);
    int rootY = find(y);
    if (rootX != rootY){
        parent[rootX] = rootY;
    }
}

//判斷有沒有環
bool isSameSet(int x,int y){
    return find(x) == find(y);
}