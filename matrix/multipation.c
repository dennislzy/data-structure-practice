//矩陣乘法

void multipationMatrix(int A[k][m],int B[m][l],int C[k][l]){
    for (int i=0;i<k;i++){
        for (int j=0;j<l;j++){
            C[i][j] =0;
            for (int u=0;u<m;u++){
                C[i][j] += A[i][u] + B[u][j];
            }
        }
    }
}