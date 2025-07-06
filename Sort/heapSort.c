#include <stdio.h>

// 這是堆積排序演算法，Time Complexity 為O(nlogn) 
//建立堆O(n) + 調整max/heap 操作需要O(logn) 需要n次 所以為O(nlogn)
//O(n) + O(nlogn) = O(nlogn)

void heapify(int arr[],int heapSize,int rootIndex){
    int largest = rootIndex;
    int left = 2*rootIndex+1;
    int right = 2*rootIndex+2;
    if (left<heapSize && arr[largest]<arr[left]){
        largest = left;
    }
    if (right<heapSize && arr[largest]<arr[right]){
        largest = right;
    }
    if (largest!=rootIndex){
        int temp = arr[largest];
        arr[largest] = arr[rootIndex];
        arr[rootIndex] = temp;
        heapify(arr,heapSize,largest);
    }
}
