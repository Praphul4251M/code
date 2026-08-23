/*A program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user.*/


#include <stdio.h>

int main()
{
    float maths, english, physics, total;

    printf("Enter marks in Maths: ");
    scanf("%f", &maths);

    printf("Enter marks in English: ");
    scanf("%f", &english);

    printf("Enter marks in Physics: ");
    scanf("%f", &physics);

    total = maths + english + physics;

    // Using || for the FAIL condition — natural and readable
    if (maths < 33 || english < 33 || physics < 33 || total < 120)
    {
        printf("Result: FAILED\n");

        if (maths < 33)
            printf("Reason: Failed in Maths\n"); 
        if (english < 33)
            printf("Reason: Failed in English\n");
        if (physics < 33)
            printf("Reason: Failed in Physics\n");
        if (total < 120)
            printf("Reason: Overall percentage below 40%%\n");
    }
    else
    {
        printf("Result: PASSED\n");
    }

    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", total / 3);

    return 0;
} 