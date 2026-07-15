#include "search.h"
int searchElement(int a[],int size,int key){
    int i,flag=-1;
    for(i=0;i<size;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if (flag==1){
        return i;
    }
    else{
        return -1;
    }
}