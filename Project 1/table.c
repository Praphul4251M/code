// Print multiplication table of a number provided

#include<stdio.h>

int main(){
    int a;
    printf("Enter a natural number\n");
    scanf("%d", &a);
    printf("Table for this is\n");

    for(int i = 0;i<=10;i++){

        printf("%d X %d = %d\n", a, i, a * i);
    }

    return 0;
}