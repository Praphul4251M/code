/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

#include<stdio.h>

int main(){
    float a;
    printf("Enter your annual income in Lakhs\n");
    scanf("%f", &a);

       if(a > 2.5 && a < 5){
        printf("You paid tax five percent of your income that is %.2f Lakhs", (a * 5)/100);
       }

       else if(a > 5 && a < 10){
        printf("You paid tax twenty percent of your income that is %.2f Lakhs", (a * 20)/100);
       }
       
       else if(a > 10){
        printf("You paid tax thirty percent of your income that is %.2f Lakhs", (a * 30)/100);
       }

          else{
            printf("You are below tax slab");
          }




    return 0;
}