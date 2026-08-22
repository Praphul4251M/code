#include<stdio.h>

int main(){
    float c,f;
    printf("Enter temperature in celsius\n");
    scanf("%f", &c);
    f = (9.0/5.0)*c + 32.0;
    printf("The value of this in Farenhiet is %f", f);

                    
    return 0;
}