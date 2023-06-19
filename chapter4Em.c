/*Write a program to generate all Pythogorean Triplets with side length less than or equal to 30*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    for (a = 1; a <= 30; a++)
    {
        for (b = 1; b <= 30; b++)
        {
            for (c = 1; c <= 30; c++)
            {
                if ((a * a) + (b * b) == (c * c))
                {
                    printf("Pythogorean triplet %d %d %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}