/*A five-digit number is entered through the keyboard, Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not*/

#include <stdio.h>
int main()
{
    int number, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &number);
    int org = number;

    while (number != 0)
    {
        rem = number % 10;
        rev = (rev * 10) + rem;
        number = number / 10;
    }

    if (rev == org)
    {
        printf("It is an Armstrong NUmber!!!\n");
    }
    else
    {
        printf("Not an Armstrong number!!!\n");
    }
}