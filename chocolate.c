#include<stdio.h>

int main()
{
    int noc;
    int givingChocolate;

    printf("How many chocolates do you have ? ");
    scanf("%d", &noc);

    printf("How many of this would you give to Victoria ? ");
    scanf("%d", &givingChocolate);

    int rem = noc - givingChocolate;

    printf("Now manushi is left with %d chocolates",rem);

    return 0;
}