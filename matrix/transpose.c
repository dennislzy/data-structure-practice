//矩陣轉置

void transpose(int A[k][m],int B[m][k]){
    for (int i=0;i<k;i++){
        for (int j=0;j<m;j++){
            B[j][i] = A[i][j];
        }
    }
}

//遞歸版本
void trRe(int A[k][m],int B[m][k],int i,int j){
    if (i>=k){
        return;
    }
    if (j>=m){
        trRe(A,B,i+1,0);
        return;
    }
    B[j][i] = A[i][j];
    trRe(A,B,i,j+1);
}