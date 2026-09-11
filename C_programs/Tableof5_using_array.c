/*
Write a program to create an array of 10 integers and store multiplication table of 5 in
it.
*/

#include<stdio.h>

int main(){
    int table[11];

    for(int i = 0; i<=10; i++){
        table[i] = 5 * i;

    }

for(int k = 0;k<=10;k++){

    printf("5 X %d = %d\n", k, table[k]);
}

    return 0;
}