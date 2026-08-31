/* Write a program to calculate the sum of the numbers occurring in the multiplication
    table of 8 (consider 8 × 1 to 8 × 10).

*/

#include<stdio.h>

int main(){
    int i = 1;
    int a = 8;
    int sum1 = 0;
    int sum2 = 0;


        while(i<=10){
            sum1 = a * i;
            i++;
            sum2 +=sum1;   // sum2 = sum2 + sum1

        }
               printf("The sum of the numbers occuring in the multiplication table of eight is %d", sum2);


    return 0;
}