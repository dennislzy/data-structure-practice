#include <stdio.h>

int findkSmallElement(int arr[], int n, int k) {
    int top[k];
    for (int i=0;i<k;i++){
        top[i] = arr[i];
    }
    int maxIndex =0;
    for (int i=0;i<k;i++){
        if (top[i]>top[maxIndex]){
            maxIndex =i;
        }
    }
    for (int i=k;i<n;i++){
        if (arr[i]<top[maxIndex]){
            top[maxIndex] = arr[i];
            maxIndex =0;
            for (int j=0;j<k;j++){
                if (top[maxIndex]<top[j]){
                    maxIndex = j;
                }
            }
        }
    }
    return top[maxIndex];
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 0, 1, 4};
    int a = findkSmallElement(arr, 8, 4);
    printf("%d\n", a);  // 印出第4小元素
    return 0;
}
