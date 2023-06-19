/*Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another*/

#include <stdio.h>

#include <math.h>

int main()
{
    long num1, num2;

    printf("Enter two numbers:  ");

    scanf("%ld%ld", &num1, &num2);

    long result = pow(num1, num2);

    printf("%ld raise to the power of %ld is %ld\n", num1, num2, result);

    return 0;
}