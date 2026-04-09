#include<stdio.h>
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
int main(){ 
    int min =0;
    int max =99;
    int* ptrmin = &min,*ptrmax = &max;
    int arr[] = {56,32,45,2,12,21,334,8};
    minmax(arr,8,ptrmin,ptrmax);
    printf("Min number is : %d and Max number is : %d", min,max);

}