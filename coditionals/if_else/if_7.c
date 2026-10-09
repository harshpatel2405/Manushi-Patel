#include <stdio.h>

int main()
{
    int size;
    printf("1. Small\n2. Medium\n3. Large\nEnter Size for Double Cheese : ");
    scanf("%d", &size);

    if (size == 1)
    {
        printf("Price for this small Pizza is 5 pounds");
    }
    else if (size == 2)
    {
        printf("Price for this medium pizza is 8 pounds");
    }
    else
    {
        printf("Price for this large pizza is 20 pounds");
    }
    return 0;
}