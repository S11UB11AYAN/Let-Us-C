/*Population of a town today is 100000. The population has increased steadily at the rate of 10% per year for last 10 years. Write a program to determine the population at the end of each year in the last decade*/

#include <stdio.h>
int main()
{
    int pol = 100000;
    float rate = 0.1;
    for (int i = 1; i <= 10; i++)
    {
        pol = (int)(pol + (pol * rate));
        printf("In %d year populaion of the town is %d\n", i, pol);
    }
    return 0;
}