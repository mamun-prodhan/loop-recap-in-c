#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int x;
        scanf("%d",&x);

        while(x>0){
            int result = x % 10;
            printf("%d", result);

            x = x/10;
        }
        printf("\n");
    }

    return 0;
}