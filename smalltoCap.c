#include<stdio.h>
int main(){
    char some;
    printf("Enter any character: ");
    scanf("%c",&some);
    if((int)some>= 65 && (int)some<=90){
        printf("Capital");
    }
    else if ((int)some>= 97 && (int)some<=122){
        some = (int)some-32;
        printf("%c",(char)some);

    }
    else{
        printf("INVALID INPUT");
    }
}