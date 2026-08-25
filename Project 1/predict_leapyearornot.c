/*Write a program to find whether a year entered by the user is a leap year or not. Take
year as an input from the user*/

/*As one clean check:

Divisible by 400 → Leap year
Else if divisible by 100 → Not a leap year
Else if divisible by 4 → Leap year
Else → Not a leap year*/

#include<stdio.h>

int main(){

 int a;

    printf("Enter year:\n");
    scanf("%d", &a);


      if(a %400 == 0 || a %4 == 0){ // always remember equality strict rule 
        printf("This is leap year");

      }
    else if(a %100 == 0){
        printf("Not a leap year");
    }

    else{
        printf("Not a leap year");
    }



    return 0;
}
