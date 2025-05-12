#include <stdio.h>

//冒泡排序O(n^2)
void bubbleSort(int arr[],int n){
    for (int i=0;i<n-1;i++){

        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
   int arr[] = {7,5,2,3,6};
   bubbleSort(arr,5);
   for (int i=0;i<5;i++){
    printf("%d\n",arr[i]);
   }
}
