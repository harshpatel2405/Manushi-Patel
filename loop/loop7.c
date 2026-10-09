// * paper beats rock   manushiChoice == 2 && computerChoice == 1
// * rock beat scissor  manushiChoice == 1 && computerChoice == 3
// * scissor beat paper manushiChoice == 3 && computerChoice == 2

//             manushi vs computer
//                 manushi random

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 1. Rock     2. paper    3. Scissor
    int manushiChoice;
    int i;
    int manushiScore = 0;
    int computerScore = 0;

    for (i = 1; i <= 5; i++)
    {
        printf("\n====================================\n");
        printf("     ROCK PAPER SCISSORS Attempt- %d\n", i);
        printf("====================================\n");
        srand(time(NULL));
        int computerChoice = rand() % 3 + 1;
        printf("1. Rock    2. paper    3. Scissor\nSelect Your Choice : ");
        scanf("%d", &manushiChoice);

        // * manushi Choice
        if (manushiChoice == 1)
        {
            printf("Manushi - Rock\t");
        }
        else if (manushiChoice == 2)
        {
            printf("Manushi - Paper\t");
        }
        else
        {
            printf("Manushi - Scissor\t");
        }

        // * Computer Choice
        if (computerChoice == 1)
        {
            printf("Computer - Rock\n");
        }
        else if (computerChoice == 2)
        {
            printf("Computer - Paper\n");
        }
        else
        {
            printf("Computer - Scissor\n");
        }

        // * decide winner
        if (manushiChoice == computerChoice)
        {
            printf("DRAW\n\n");
        }
        else if ((manushiChoice == 2 && computerChoice == 1) || (manushiChoice == 1 && computerChoice == 3) || (manushiChoice == 3 && computerChoice == 2))
        {
            printf("Manushi Wins...\n\n");
            manushiScore++;
        }
        else
        {
            printf("Computer Wins...\n\n");
            computerScore++;
        }
    }

    printf("Manushi Score : %d\n", manushiScore);
    printf("Computer Score : %d\n", computerScore);

    if (manushiScore > computerScore)
    {
        printf("\n------------------------\nManushi Is Winner\n------------------------\n");
    }
    else if (manushiScore < computerScore)
    {
        printf("\n------------------------\nComputer Is Winner\n------------------------\n");
    }

    else
    {
        printf("\n------------------------\nDRAW\n------------------------\n");
    }
    return 0;
}