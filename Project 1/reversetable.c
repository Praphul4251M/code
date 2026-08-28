/*  Write a program to print multiplication table of 10 in reversed order */


#include<stdio.h>

int main(){
    int a;
    printf("Enter a natural number\n");
    scanf("%d", &a);
    printf("Table for this is\n");

        for(int i = 10;i;i--){
            printf("%d X %d = %d\n", a, i, a * i);  
        }

    return 0;
}