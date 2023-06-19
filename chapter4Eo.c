/*Ramanujan number is the smallest number that can be expressed as sum of two cubes in two different ways. Write a program to print all such numbers up to a reasonable limit*/

#include <stdio.h>
#include <math.h>

int isRamanujanNumber(int num)
{
    int limit = (int)cbrt(num);
    int count = 0;

    for (int a = 1; a <= limit; a++)
    {
        for (int b = a; b <= limit; b++)
        {
            int sum1 = a * a * a + b * b * b;
            if (sum1 > num)
            {
                break;
            }
            for (int c = a + 1; c <= limit; c++)
            {
                for (int d = c; d <= limit; d++)
                {
                    int sum2 = c * c * c + d * d * d;
                    if (sum2 == num && a != c && a != d && b != c && b != d)
                    {
                        return 1;
                    }
                }
            }
        }
    }

    return 0;
}

void printRamanujanNumbers(int limit)
{
    for (int num = 1; num <= limit; num++)
    {
        if (isRamanujanNumber(num))
        {
            printf("%d\n", num);
        }
    }
}

int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Ramanujan numbers up to %d:\n", limit);
    printRamanujanNumbers(limit);

    return 0;
}
