// * check whether the number entered by the user is even ..

#include <stdio.h>

int main()
{
    int n; // * store the value given by user -- variable

    printf("Enter a number : ");
    scanf("%d", &n);

    // * if -> round brackets (condition) -> curly brackets (logic)
    if (n % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}