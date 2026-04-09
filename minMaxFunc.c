
#include "sizeOfArray.h"


void minmax(int arr[],int n , int* max,int* min){
   
    for(int i = 0; i< n;i++){
        if(arr[i]>*min){
            *min =arr[i];
        }
        if(arr[i]<*max){
            *max = arr[i];
        }
    }   
}