/*
Aquarium

* Choose a sea animal.
*
* 1. Shark
* 2. Dolphin
* 3. Beluga Whale
* 4. Octopus

* Print a fun fact.
*/

#include <stdio.h>

int main()
{
    int choice;

    printf("1. Shark\n2. Dolphin\n3. Beluga Whale\n4. Octopus\nSelect your favourite Sea Animal : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Shark has no bones");
    }
    else if (choice == 2)
    {
        printf("Dophins sleep with one eye open");
    }
    else if (choice == 3)
    {
        printf("Beluga whales can swim backwards");
    }
    else if (choice == 4)
    {
        printf("Octopus have blue blood");
    }
    else
    {
        printf("Select Correct Animal");
    }

    return 0;
}