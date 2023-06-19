/*Write a program to produce the following output:

                    1
                2       3
            4       5       6
        7       8       9      10
*/

#include <stdio.h>
int main()
{
    int c = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 3 - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= (2 * i) + 1; k++)
        {
            if (k % 2 == 0)
            {
                printf("  ");
            }
            else
            {
                printf("%d ", c);
                c++;
            }
        }
        printf("\n");
    }
}