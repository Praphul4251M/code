// Write a recursive function to calculate the sum of first 'n'natural numbers

int sumnatural(int);

// 1 + 2 + 3 + 4 + 5, n=5
// 1 + 2 + 3 + 4 + ... + n-1 + n  , n=n

  
    int sumnatural(int n){
        if(n == 1){
            return 1;  // So base case is important to conclude recursive op!
        }

        return sumnatural(n - 1) + n;
    
    }


#include<stdio.h>

int main(){

    int n;
    printf("Enter a natural number\n");
    scanf("%d", &n);

    printf("Sum of the natural number till %dth term is %d", n, sumnatural(n));
    



    return 0;
}