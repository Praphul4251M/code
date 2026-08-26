#include <stdio.h>

int main()
{
    float a, b, c, d;

    printf("Enter first number\n");
    scanf("%f", &a);

    printf("Enter second number\n");
    scanf("%f", &b);

    printf("Enter third number\n");
    scanf("%f", &c);

    printf("Enter fourth number\n");
    scanf("%f", &d); // here have to make all four cases to proceed this if ,else if statement control

    if (a > b && a > c && a > d)
    {
        printf("Greatest number is %.2f", a);
    }

    else if (b > a && b > c && b > d)
    {
        printf("Greatest number is %.2f", b);
    }

    else if (c > a && c > b && c > d)
    {
        printf("Greatest number is %.2f", c);
    }

    else if (d > a && d > b && d > c)
    {
        printf("Greatest number is %.2f", d);
    }

    return 0;
}