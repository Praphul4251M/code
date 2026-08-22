#include<stdio.h>

int main(){
    float I,P,R,T;
    printf("Enter the principal amount\n");
    scanf("%f", &P);
    printf("Enter the rate of interest\n");
    scanf("%f", &R);
    printf("Enter the time period in months\n");
    scanf("%f", &T);
    I = (P*R*T)/100;
    printf("The simple interest is %f", I);
    printf("\nThe total amount is %f", P+I);





    return 0;
}