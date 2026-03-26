#include<stdio.h>
int largest(int arr[],int n){
    int temp;
    temp = *arr;
    for (int i=0;i<n;i++){
        if (*(arr + i)>temp){
            temp = *(arr + i);
        }
        
    }
    return temp;


}


void fun(short i, short k){
    printf("%d %d",i,k);

}


int main(){
   
    int a = 122344567893.30;
    

    short k = 20;

    fun(a,k);


}