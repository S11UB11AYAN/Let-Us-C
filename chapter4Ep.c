/*Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight*/

#include <stdio.h>

void printHours()
{
    printf("12 Midnight\n");

    for (int hour = 1; hour <= 11; hour++)
    {
        printf("%d AM\n", hour);
    }

    printf("12 Noon\n");

    for (int hour = 1; hour <= 11; hour++)
    {
        printf("%d PM\n", hour);
    }

    printf("12 Midnight\n");
}

int main()
{
    printf("24 Hours of the Day:\n");
    printHours();

    return 0;
}
