#include <stdio.h>
//插入排序法，最好TimeComplexity 為O(n) 最壞為O(n^2) 
void inserationSort(int arr[],int n){
    for (int i=1;i<n;i++){

        for (int j=i;j>0;j--){
            if (arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {7,5,2,3,6};
    inserationSort(arr,5);
    for (int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}