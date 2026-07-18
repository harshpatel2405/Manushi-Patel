#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value for a : ");
    scanf("%d", &a);

    printf("Enter value for b : ");
    scanf("%d", &b);

    // * addition
    int c;
    c = a + b;
    printf("Addition of %d and %d is %d\n", a, b, c);

    // * subtraction
    int d;
    d = a - b;
    printf("Subtraction of %d and %d is %d\n", a, b, d);

    // * multiplication
    int e;
    e = a * b;
    printf("Multiplication of %d and %d is %d\n", a, b, e);

    // * division
    int f;
    f = a / b;
    printf("Division of %d and %d is %d\n", a, b, f);

    int g;
    g = a % b;
    printf("%d modulus %d = %d", a, b, g);

    return 0;
}
