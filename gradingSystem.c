#include<stdio.h>

int main(){

    int marks;
    scanf("%d", &marks);

    if(marks >= 0 && marks <= 100){
        if(marks <= 100 && marks >= 80){
            printf("A+");
        }
        else if(marks <= 79 && marks >= 70){
            printf("A");
        }
        else if(marks <= 69 && marks >= 60){
            printf("A-");
        }
        else if(marks <= 59 && marks >= 50){
            printf("B");
        }
        else if(marks <= 49 && marks >= 40){
            printf("C");
        }
        else if(marks <= 39 && marks >= 33){
            printf("D");
        }
        else{
            printf("F");
        }
    }else{
        printf("Invalid Marks");
    }

    return 0;
}