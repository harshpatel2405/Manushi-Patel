/*
* if main course is completed , then bring Caramel ice cream

* Nested If_else

* if(have you reached school)
* {
*     if(have you done homework)
      {
*
      }
* }
*
*/
/*
^ 🍫 Chocolate Factory (Easy)
^ A chocolate factory gives gifts using these rules:
^
^ If the child scored 80 or more marks:
^     If attendance is 90% or above, give a Big Chocolate Box.
^     Otherwise, give a Small Chocolate Box.
^ Otherwise:  Better luck next time!
*/

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