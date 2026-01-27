#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // srand(time(NULL)); // Generate random Number using the computers time

    int randomNum = 42; // rand() % 101; //Random number in range 0-100
    int userGuess;
    // int tries = 0;

    printf("Enter guess: ");
    scanf("%d", &userGuess);
    // tries++;

    while (userGuess != randomNum)
    {
        if (userGuess < randomNum)
            printf("Higher!\n");
        if (userGuess > randomNum)
            printf("Lower!\n");
        scanf("%d", &userGuess);
        // tries++;
    }

    // printf("You Guessed Right, in %d tries \n", tries);
    if (userGuess == randomNum)
        printf("Correct!\n");

    return 0;
}