#include "sort.h"
#include "binary.h"
#include<stdio.h>
int main(){
    int i,size,key,result;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);    
    }
    arr_sort(arr,size);
    printf("Enter the key to be searched:");
    scanf("%d",&key);
    result=binary_search(arr,size,key);
    if(result==-1){
        printf("Element not found!\n");
    }
    else{
        printf("Element %d found at index %d\ns",key,result);
    }
    return 0;
}