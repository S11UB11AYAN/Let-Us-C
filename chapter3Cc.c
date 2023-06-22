/*Any year is input through  the keyboard. Write a program to determine whether the year is a leap year or not.(Hint: Use the %(modulus) operator)*/

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 == 0)
    {
        printf("It is a leap year!!!\n");
    }
    else if (year % 400 == 0)
    {
        printf("It is a leap year!!!\n");
    }
    else
    {
        printf("It is not a leap year!!!\n");
    }

    return 0;
}