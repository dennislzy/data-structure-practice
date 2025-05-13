#include <stdio.h>
//二分搜尋法 Time Complexity為O(logN),需要在數組已排序的情況下才適用
int binearySearch(int arr[],int n,int left,int right,int target){
    if (left<=right){
        int mid = (left+right)/2;
        if (arr[mid] == target){
            return mid;
        }else if (arr[mid]>target){
            return binearySearch(arr,n,left,mid-1,target);
        }else{
            return binearySearch(arr,n,mid+1,right,target);
        }
    }else{
        return -1;
    }
}
int main(){
    int arr[] = {1,3,5,9,11,34};
    int index = binearySearch(arr,6,0,5,10);
    printf("%d\n",index);
    return 0;
}