#include<stdio.h>

int main(){

    int n, even=0, odd=0, negative=0, positive=0;
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);
        
        if(x%2 == 0){
            even+=1;
        }
        else{
            odd+=1;
        }

        if(x > 0){
            positive+=1;
        }
        else if(x < 0){
            negative+=1;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);


    return 0;
}