#include <stdio.h>

int main()
{
    int vm;
    int em;
    int mm;
    int totalMarks;

    printf("Enter Maths Exam marks of Victoria : ");
    scanf("%d", &vm);

    printf("Enter Maths marks of Elizabeth : ");
    scanf("%d", &em);

    printf("Enter Maths marks for Manushi : ");
    scanf("%d", &mm);

    totalMarks = vm + em + mm;

    printf("Total marks of Manushi ,Victoria and Elizabeth is %d", totalMarks);

    return 0;
}