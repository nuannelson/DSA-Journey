#include "search.h"
#include <stdio.h>
int main(){
    int a[100],size,key,i,result;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the key to be Searched:");
    scanf("%d",&key);
    result=searchElement(a,size,key);
    if(result==-1){
        printf("Key not found!");
    }
    else{
        printf("Key:%d Found at Index:%d",key,result);
    }
    return 0;
}