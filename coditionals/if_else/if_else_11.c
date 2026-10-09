#include <stdio.h>

// * Do you want to join us for picnic? 1. yes  2. no

int main()
{
    int choice;

    printf("Do you want to join us for picnic ? \n1. Yes\n2. No\nEnter Your wish : ");
    scanf("%d", &choice);


    if(choice == 1)
    {
        printf("Hurray! We will have Fun..");
    }
    else 
    {
        printf("Sad..");
    }
    return 0;
}