// * Question : You  can eat pizza , only if you are 7 or more years old
#include <stdio.h>

int main()
{

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 7)
    {
        printf("You can eat Pizza");
    }
    else
    {
        printf("You cannot eat Pizza");
    }
    return 0;
}

/*
* If the player has 50 or more magic points, cast the spell. Otherwise, print "Not enough magic!"


int points;

take user input for points
*/