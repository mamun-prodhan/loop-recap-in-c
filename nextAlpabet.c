#include<stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);

    if(ch == 'z'){
        printf("a");
    }
    else{
    printf("%c", ++ch);
    }
    return 0;
}