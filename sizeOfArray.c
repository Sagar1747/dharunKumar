#include "sizeOfArray.h"

int count(int arr[]) {
    int i = 0;

    while (arr[i] != -1) {
        i++;
    }

    return i; 
}