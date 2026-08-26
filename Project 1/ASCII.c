#include<stdio.h>

int main(){
    char ch;
printf("Enter a character\n");
scanf("%c", &ch);

    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);




if(ch >= 97 && ch<= 122){
    printf("This character is in lowercase\n");

}
else{
    printf("This is in Uppercase or maybe an special chracter\n");
}

    return 0;
}