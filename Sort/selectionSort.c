//選擇排序，最好最壞Time Complexity 均爲 O(n^2)
#include <stdio.h>
void SelectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){

        int minIndex = i;

        for (int j=i;j<n;j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[] = {7,5,2,3,6};
    SelectionSort(arr,5);
    for (int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

