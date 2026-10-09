#include <stdio.h>

int main()
{
    int n;

    printf("How many times should the robot say hello? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("🤖 Hello!\n");
    }

    return 0;
}