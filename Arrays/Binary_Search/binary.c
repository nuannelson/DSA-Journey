#include "binary.h"
int binary_search(int arr[],int size,int key){
    int l=0,r=size-1,i;
    int mid=-1;
    while(i<=r){
        mid=(l+r)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            l=mid+1;
        }
        if(arr[mid]>key){
            r=mid-1;
        }
    }
    return -1;
}    