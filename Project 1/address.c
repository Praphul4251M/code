/*
Write a program to print the address of a variable. Use this address to get the value of
the variable.
*/


#include<stdio.h>

int main(){
    int a=4;
    int* k = &a;
    printf("Address of a is %u\n", &a);
    printf("Value at address of a is %d", *k);
    


    return 0;
}