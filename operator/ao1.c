#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Enter number 1 : ");
    scanf("%d", &number1);

    printf("Enter Number 2 : ");
    scanf("%d", &number2);

    int addition = number1 + number2;

    printf("Addition of %d and %d is %d", number1, number2, addition);
    return 0;
}