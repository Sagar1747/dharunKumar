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
int main(){
    int large = largest({45,3,12,67,23,1},6);
    printf("Largest number: %d",large);

}