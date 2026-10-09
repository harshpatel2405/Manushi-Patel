// * a ride can maximum take 10 person at a time. Take input from user , and if there are more than 10 people, then , print "Ride will not start" , else print "Ride Started....have Fun"

#include <stdio.h>

int main()
{
    int people;

    printf("Enter number of people : ");
    scanf("%d", &people);

    if (people > 10)
    {
        printf("Ride will not start");
    }
    else
    {
        printf("Ride Started...Have Fun");
    }
    return 0;
}