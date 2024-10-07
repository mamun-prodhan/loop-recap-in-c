#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int x;
        scanf("%d",&x);

        if(n == 0){
            printf("0");
        }

        while(x>0){
            int result = x % 10;
            printf("%d", result);

            x = x/10;
        }
        printf("\n");
    }

    return 0;
}