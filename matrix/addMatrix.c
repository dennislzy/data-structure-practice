//矩陣加法

void addMatrix(int A[k][m],int B[k][m],int C[k][m]){
    for (int i=0;i<k;i++){
        for (int j=0;j<m;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void addMatrix(int A[k][m],int B[k][m],int C[k][m],int i,int j){
    if (i>=k){
        return;
    }
    if (j>=m){
        addMatrix(A,B,C,i+1,0);
        return;
    }
    C[i][j] = A[i][j] + B[i][j];
    addMatrix(A,B,C,i,j+1);
}