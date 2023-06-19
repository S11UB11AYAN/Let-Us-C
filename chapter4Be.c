/*Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number itself, then the number is called Armstrong number. For example, 153=(1*1*1)+(5*5*5)+(3*3*3)*/

#include <stdio.h>
#include <math.h>

int main()
{
    int rem, sum = 0, i;
    printf("The numbers between 1 and 500 which are armstrong are as follows: \n");
    for (i = 10; i <= 500; i++)
    {
        int org = i;
        int num = i;
        while (num > 0)
        {
            rem = num % 10;
            sum = sum + pow(rem, 3);
            num = num / 10;
        }

        if (org == sum)
        {
            printf("%d\n", org);
        }

        sum = 0;
    }

    return 0;
}