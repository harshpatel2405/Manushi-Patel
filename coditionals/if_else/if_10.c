#include <stdio.h>

int main()
{
      int marks;
      int attendance;

      printf("Enter your marks : ");
      scanf("%d", &marks);

      printf("Enter your attendance : ");
      scanf("%d", &attendance);

      if (marks > 80)
      {
            if (attendance > 90)
            {
                  printf("You Got Big Chocolate Box");
            }
            else
            {
                  printf("You got small Chocolate Box");
            }
      }
      else
      {
            printf("Better Luck Next Time");
      }

      return 0;
}