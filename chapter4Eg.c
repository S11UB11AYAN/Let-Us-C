/*Write a program to produce the following output:
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 65; j <= 71 - i; j++)
        {
            printf("%c ", j);
        }
        for (int k = 1; k < (2 * i); k++)
        {
            printf("  ");
        }
        if (i == 0)
        {
            for (int j = 70; j >= 65; j--)
            {
                printf("%c ", j);
            }
            printf("\n");
        }

        else
        {
            for (int j = 70 - i + 1; j >= 65; j--)
            {
                printf("%c ", j);
            }
            printf("\n");
        }
    }
}
