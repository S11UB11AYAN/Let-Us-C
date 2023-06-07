/*Write a program to add first seven terms of the following series using a for loop*/

#include<stdio.h>

long factorial(long);
long main()
{
    long sum=0, num=1;

    for(long i=1;i<=7;i++)
    {
        sum=sum+(i/factorial(i));
    }

    printf("%ld\n",sum);

    return 0;

}

long factorial(long num)
{
    long pro=1;
    for(long i=1;i<=num;i++)
    {
        pro=pro*i;
    }

    return pro;
}