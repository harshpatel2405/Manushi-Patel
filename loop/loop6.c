// Guess : 45

// Manushi Enter the number : 43
// Higher Number Please!

// Manushi Enter the number : 47
// Lower Number Please!

// Manushi Enter the number : 45
// Correct, You Guessed it Right

// we have to run the loop , untill we guess the correct number....

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int guess = rand() % 20 + 1;
    int ManushiChoice;
    for (; ManushiChoice != guess;)
    {
        printf("Manushi Enter the Choice : ");
        scanf("%d", &ManushiChoice);

        if (ManushiChoice > guess)
        {
            printf("Lower Number Please!\n\n");
        }
        else if (ManushiChoice < guess)
        {
            printf("Higher Number Please!\n\n");
        }
        else
        {
            printf("Hurray! YOu won the game\n\n");
        }
    }
    return 0;
}

// rock paper scissor
//     heads or tails