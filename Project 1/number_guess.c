#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Print the random number
    // printf("Random Number: %d\n", randomNumber);  // Because we dont want to show random number to the user

    int number_of_guess = 0;
    int guessed;

    do
    {

        printf("Guess any number between 1 to 100\n");  // do whileloop atleast run once so we can take input under it also
        scanf("%d", &guessed);

        if (guessed < randomNumber)
        {
            printf("Higher number please!\n");
        }

        else if (guessed > randomNumber)
        {
            printf("Lower number please\n");
        }

        number_of_guess++;

    } while (guessed != randomNumber);

    printf("You guessed the number in %d attempt which is %d", number_of_guess, randomNumber);

    return 0;
}