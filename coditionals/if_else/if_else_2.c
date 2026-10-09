#include <stdio.h>

int main()
{
    int choice;

    printf("Do you like Ice - Cream ? \n1. Yes\t2. No\nSelect Your Wish : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("okk, let's get to the store.");
    }
    else
    {
        printf("I am going, to eat alone");
    }
    return 0;
}