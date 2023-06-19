/*Write a program to generate all combinations of 1,2 and 3 using for loop*/

#include <stdio.h>
int main()
{
    int numbers[] = {1, 2, 3};
    int combinations[27][3]; // Assuming we have 3^3 = 27 combinations
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                combinations[count][0] = numbers[i];
                combinations[count][1] = numbers[j];
                combinations[count][2] = numbers[k];
                count++;
            }
        }
    }

    // Printing the generated combinations
    for (int i = 0; i < count; i++)
    {
        printf("%d %d %d\n", combinations[i][0], combinations[i][1], combinations[i][2]);
    }

    return 0;
}
