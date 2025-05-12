#include <stdio.h>

//計數排序O(n)
void countingSort(int arr[],int n){
    //統計最大值
    int max = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    //統計數字出現次數
    int* count = calloc(max+1,sizeof(int));
    for (int i=0;i<n;i++){
        count[arr[i]]++;
    }
    //重寫arr
    int index =0;
    for (int i=0;i<=max;i++){
        while (count[i]>0){
            arr[index++] = i;
            count[i]--;
        }
    }
}
int main(){
    int arr[] = {7,5,2,3,6};
    countingSort(arr,5);
    for (int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}