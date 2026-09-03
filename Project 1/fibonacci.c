// Write a program using recursion to calculate nth element of Fibonacci series.



/*The Fibonacci series is a sequence of numbers where each number is the sum of the two numbers before it.
A common Fibonacci sequence is:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

Fn ​= Fn−1 ​+ Fn−2​  , n>2

This type of sequence can be solved via recursion

*/

int fabonacci(int);



    int fabonacci(int n){

        if(n == 1 || n == 2){  // base case
            return n-1;
        }

        return fabonacci(n - 1) + fabonacci(n - 2);

    }


#include<stdio.h>

int main(){
    int n;

    printf("Enter nth term\n");
    scanf("%d", &n);

    printf("Fabonacci value of %d term is %d ", n, fabonacci(n));
    
    return 0;
}