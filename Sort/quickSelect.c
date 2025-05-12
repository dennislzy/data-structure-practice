//快速選擇法，用於在不排序的情況下找出第k大，會第k小數字，為O(n)
#include <stdio.h>

//分治法
int partition(int arr[],int left ,int right){
    int standard = arr[left];
    int i = left;
    int j= right;

    while (i<j){

        while (arr[j]>=standard && (i<j)){
            j--;
        }

        while (arr[i]<=standard && (i<j)){
            i++;
        }
        if (i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[left] = arr[i];
    arr[i] = standard;
    return i;
}

int  quickSelect(int arr[],int left,int right,int k){
    if (left<right){

        int pri = partition(arr,left,right);

        if (pri == k-1){
            return arr[pri];
        }else if (pri>k-1){
            return quickSelect(arr,left,pri-1,k);
        }else{
            return quickSelect(arr,pri+1,right,k);
        }
    }else{
        return arr[left];
    }
}

int main(){
    int arr[] = {7,5,2,3,6};
    int num = quickSelect(arr,0,4,5);
    printf("%d",num);
    return 0;
}
