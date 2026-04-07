#include<stdio.h>

void sort(int arr[], int num){
    for(int i = 0; i < num - 1; i++){
        for(int j = 0; j < num - i - 1; j++){
            if(arr[j] < arr[j + 1]){   
                int temp;
                temp = arr[j];         
                arr[j] = arr[j + 1];   
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arrnew[] = {45, 34, 2, 12, 87, 54, 2, 0};
    int num = 8;

    sort(arrnew, num);   

   
    for(int i = 0; i < num; i++){
        printf("%d ", arrnew[i]);
    }

    return 0;
}