#include <stdio.h>
int main(){
    int size,target,i,j,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum of two elements:");
    scanf("%d",&target);
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                printf("The Location of elements are %d,%d\n",i+1,j+1);
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("No such element found!");
    }
    return 0;
}