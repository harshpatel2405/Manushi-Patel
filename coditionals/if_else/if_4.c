// * ZOO -- 1. Elephant Sound   else -> monkey

#include <stdio.h>

int main()
{
    int animalChoice;

    printf("1. Elephant\nElse Monkey\nSelect your choice : ");
    scanf("%d", &animalChoice);

    if (animalChoice == 1)
    {
        printf("Elephant - Big Ears");
    }
    else
    {
        printf("Monkey jumps on trees");
    }

    return 0;
}