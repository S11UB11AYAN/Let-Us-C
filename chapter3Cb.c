/*Any integer is input through the keyboard. Write a program to find out whether it is odd number or even number*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The integer is an even integer!!!\n");
    }
    else
    {
        printf("The integer is an odd integer!!!\n");
    }
    return 0;
}