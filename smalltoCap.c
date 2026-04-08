#include<stdio.h>
int main(){
    char some;
    printf("Enter any character: ");
    scanf("%c",&some);
    if(some>= 65 && some<=90){
        printf("Capital");
    }
    else if (some>= 97 && some<=122){
        some-=32;
        printf("%c",some);

    }
    else{
        printf("INVALID INPUT");
    }
}