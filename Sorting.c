#include<stdio.h>

void sort(int arr[], int num){
    int flag;
    for(int i = 0; i < num - 1; i++){
        flag = 0;
        for(int j = 0; j < num - i - 1; j++){
            if(arr[j] > arr[j + 1]){   
                int temp;
                temp = arr[j];         
                arr[j] = arr[j + 1];   
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}
// [1,2,3,4,5,6,7,8]
int main(){
    int arrnew[] = {45, 34, 2, 12, 87, 54, 2, 0};
    int num = 8;

    sort(arrnew, num);   

   
    for(int i = 0; i < num; i++){
        printf("%d ", arrnew[i]);
    }

    return 0;
}