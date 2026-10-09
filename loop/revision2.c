#include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    for (i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}

// 1 + 2 + 3 + 4 + 5