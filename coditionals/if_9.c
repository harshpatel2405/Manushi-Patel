/*
1. Pani Puri
2. Palak Paneer
3. Pudding
4. Caramel Ice Cream
*/

#include <stdio.h>

int main()
{
    int manushiChoice;

    printf("1. Pani Puri\n2. Palak Paneer\n3. Pudding\n4. Caramel Ice Cream\nSelect Your Choice : ");
    scanf("%d", &manushiChoice);

    if (manushiChoice == 1)
    {
        printf("Manushi is eating pani puri");
    }
    else if (manushiChoice == 2)
    {
        printf("Manushi is Eating Palak Paneer");
    }
    else if (manushiChoice == 3)
    {
        printf("Manushi is eating Pudding");
    }
    else if (manushiChoice == 4)
    {
        printf("Manushi is Eating caramel Ice Cream");
    }
    else 
    {
        printf("Manushi -- have order nai thaay");
    }

    return 0;
}