#include<stdio.h>

int main(){

    int n = 5;

    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}