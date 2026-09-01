// Write a program using function to find average of three numbers.


#include<stdio.h>

float average(float a, float b, float c);
      

    float average(float a, float b ,float c){

       return  (a + b + c)/3.0;

    }
    




int main(){
    float a,b,c;
    printf("Enter first number\n");
    scanf("%f", &a);
    printf("Enter second number\n");
    scanf("%f", &b);
    printf("Enter third number\n");
    scanf("%f", &c);

   printf("The average is %.f", average(a, b, c));
    
    return 0;
}