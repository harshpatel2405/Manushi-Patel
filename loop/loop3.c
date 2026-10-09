#include <stdio.h>

int main()
{
    // * 1 to 4 sum  (1+2+3+4 = 10 )

    int i;
    int sum = 0;
    for (i = 1; i <= 4; i++)
    {
        sum = sum + i;
        printf("%d\n", sum);
    }

    return 0;
}

// left sum -> store the value
// right sum -> current value of sum
// i -> 1 ,2 , 3 , 4

// 4 
// 1st run 
// sum = 0 + 1 = 1 
// sum = 1 + 2 = 3
// sum = 3 + 3 = 6
// sum = 6 + 4 = 10