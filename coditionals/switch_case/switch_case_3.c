#include <stdio.h>

int main()
{
    int choice;
    int a = 10, b = 4;
    printf("1. Subtraction\n2. Addition\nSelect your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You Selected Subtraction..");
        printf("\nSubtraction is %d", a - b);
        break;
    case 2:
        printf("You Selected Addition...");
        printf("\nAddition is %d", (a + b));
        break;
    }
    return 0;
}