/*Write a program to find the factorial value of any number entered through the keyboard*/

#include<stdio.h>

long factorial(long);

int main()
{
    long num;

    printf("Enter the number you want to find the factorial of :");

    scanf ("%ld",&num);

    printf("The facorial of %ld is %ld\n",num,factorial(num));

    return 0;
}

long factorial(long num)
{
    long pro;

    for(int i=1;i<=num;i++)
    {
        pro=pro*i;
    }

    return pro;
}