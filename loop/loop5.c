
// 6 % 1 = 0
// 6 % 2 = 0
// 6 % 3 = 0
// 6 % 4 = 2
// 6 % 5 = 1
// 6 % 6 = 0
//   ------
// 6 | 6  | 1
//   - 6
//   -----
//     0
//   -----
 // found the factors
#include<stdio.h>
int main()
{
  int n = 4;
  int i;
  for (i = 1; i <= 6; i++)
  {
    if (n % i == 0)
    {
      printf("%d\t",i);
    }
  }

  return 0;
}