// * Input two integers and print their sum and product(multiplication)

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    int sum = a + b;
    int product = a * b;

    printf("Sum is %d\n", sum);
    printf("Product is %d", product);
    return 0;
}
