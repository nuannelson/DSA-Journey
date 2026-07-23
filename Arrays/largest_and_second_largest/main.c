#include <stdio.h>
#include <stdlib.h>
int main(){
    int size,i,largest,second_largest;
    printf("Entter the size of array:");
    scanf("%d",&size);
    int *arr = (int*)malloc(size * sizeof(int));
    for(i=0;i<size;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    if (arr[0] > arr[1]) {
    largest = arr[0];
    second_largest = arr[1];
    } 
    else if (arr[1] > arr[0]) {
    largest = arr[1];
    second_largest = arr[0];
    } 
    else {
    largest = arr[0];
    second_largest = arr[0];
    }
    for(i=2;i<size;i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
    }
        else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
    s}
    }
    printf("The largest element is %d\n",largest);
    if(largest==second_largest){
        printf("There is no second largest element in the array\n");
    }
    else{
        printf("The second largest element is %d\n",second_largest);
    }
    free(arr);
return 0;
}