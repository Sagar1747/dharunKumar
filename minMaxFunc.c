
#include "sizeOfArray.h"
#include <stdio.h>

void minmax(int arr[], int n, int *max, int *min)
{

    int current_min = *min;
    int current_max = *max;

    for(int i=0;i<n;i++){
        if(current_max < arr[i]) current_max = arr[i];
        if(current_min > arr[i]) current_min = arr[i];
    }

    *max = current_max;
    *min = current_min;
}