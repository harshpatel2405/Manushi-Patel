#include <stdio.h>

int main()
{
    int choice;
    printf("1. Summer\n2. Winter\nSelect Your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Your Favourite season is Summer");
        break;
    case 2:
        printf("Your favourite season is winter");
        break;
    }
    return 0;
}