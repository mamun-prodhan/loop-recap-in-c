#include <stdio.h>

int main(){

    int n = 6;
    char a = 'A' - 1;

    for(int i = 1; i <= n; i++){
        a += 1;
        for(int j = 1; j <= i; j++){
            printf("%c ", a);
        }
        printf("\n");
    }

    return 0;
}