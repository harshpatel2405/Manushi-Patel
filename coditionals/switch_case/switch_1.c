#include <stdio.h>

int main()
{
    int choice;

    printf("1. Dolphin\n2. White Tiger\n3. Racoon\n4. Lion\n5. Giraffe\nSelect Your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Dolphin Sleeps with one eye open");
        break;
    case 2:
        printf("Tiger roar can be heard from 2 miles away");
        break;
    case 3:
        printf("Racoons can solve complex puzzles");
        break;
    case 4:
        printf("Lions can sleep upto 20 hours a day");
        break;
    case 5:
        printf("Giraffes have Dark Blue-Purple Tongue");
        break;
    default:
        printf("Select Animal from 1 - 5 only");
    }

    return 0;
}