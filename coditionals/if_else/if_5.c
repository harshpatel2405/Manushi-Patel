/*
* Weather Helper

* Enter weather.
* 1. Sunny
* 2. Rainy
* 3. Snowy
* 4. Windy

* Suggest what to wear.

*/

#include <stdio.h>

int main()
{
    int season;

    printf("1. Sunny\n");
    printf("2. Rainy\n");
    printf("3. Snowy\n");
    printf("4. Windy\n");
    printf("Select the season : ");
    scanf("%d", &season);

    if (season == 1)
    {
        printf("Wear a Cap");
    }
    else if(season == 2)
    {
        printf("Wear a Raincoat");
    }
    else if(season == 3)
    {
        printf("Wear Boots and Gloves");
    }
    else if(season == 4)
    {
        printf("Wear a scarf");
    }
    else 
    {
        printf("Wear according to the season...");
    }

    return 0;
}