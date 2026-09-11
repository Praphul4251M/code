/*To take general input provided by the user using  scanf and create a table of that number using array
*/

#include<stdio.h>

int main(){
    int table[11];

    int a;
    printf("Enter the number for which you want the multiplication table: ");
    scanf("%d", &a);

    for(int i = 0; i<=10; i++){
        table[i] = a * i;

    }

for(int k = 0;k<=10;k++){

    printf("%d X %d = %d\n", a, k, table[k]);
}
    return 0;
}