#include <stdio.h>

// 這是堆積排序演算法，Time Complexity 為O(nlogn) 
//建立堆O(n) + 調整max/heap 操作需要O(logn) 需要n次 所以為O(nlogn)
//O(n) + O(nlogn) = O(nlogn)

//用於刪除數字
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
// 刪除最大值元素heap程式碼
void remove(int arr[],int* size){
    if (*size <=0){
        return -1;
    }
    arr[0] = arr[*size-1];
    (*size)--;
    heapify(arr,*size,0);
}
//用於heapup
void heapiUp(int arr[],int index){
    while(index>0){
        int parentIndex = (index-1)/2;
        if (arr[parentIndex]<arr[index]){
            int temp = arr[parentIndex];
            arr[parentIndex] = arr[index];
            arr[index] = temp;
            index = parentIndex;
        }else{
            break;
        }
    }
}
//新增
void insert(int arr[],int* size,int val){
    arr[*size] = val;
    heapiUp(arr,*size);
    (*size)++;
}

//堆積排序
void heapSort(int arr[],int n){

    //建立最大堆
    for (int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    //不斷交換最上面和最下面元素
    for (int i=n-1;i>=0;i--){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr,i,0);
    }
}
