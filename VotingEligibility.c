#include <stdio.h>

int main()
{

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible for Vote!");
    else
        printf("You are not eligible for Vote!");

    return 0;
}
