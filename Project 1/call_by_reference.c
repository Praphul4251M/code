/*Write a function and pass the value by reference.
*/

#include<stdio.h>

void change(int* a);
void change(int* a){
   *a = 5;

}

int main(){
    int a = 4;
    change(&a);
    printf("The value of a is %d\n", a);
    
    return 0;
}