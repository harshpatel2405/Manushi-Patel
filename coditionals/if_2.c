/*
* Dinosaur Height Check

& A dinosaur can enter Dino Park only if its height is more than 5 feet.

& Take the dinosaur's height as input and print:

& if height is more than 5 feet print "Welcome Dino!"
*/

#include <stdio.h>

int main()
{
    // * get dino height as input from user
    float height;

    printf("Enter Dinosaur's Height : ");
    scanf("%f", &height);

    // * if -> round brackets(condition) -> curly brackets (logic)
    if (height > 5) // ^ condition
    {
        printf("Welcome Dino! You can enter park");
    }
    else
    {
        printf("Dino , You are small , Play at HOME!");
    }

    return 0;
}