#include<stdio.h>
int main(){

    int n = 39;

    int second = n % 10;
    int first = (n / 10);

    if(first % second == 0 || second % first == 0){
        printf("Yes");
    } 
    else{
        printf("No");
    }

    return 0;
}