/*If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made or incurred loss. Also determine how much profit he made or loss he incurred.*/

#include <stdio.h>

int main()
{
    float cp, sp;
    printf("Enter your cost price: ");
    scanf("%f", &cp);
    printf("Enter your selling price: ");
    scanf("%f", &sp);
    if (cp > sp)
    {
        float dif = (cp - sp);
        printf("You have incurred a loss of Rs.%.2f\n", dif);
    }
    else if (cp < sp)
    {
        float dif = (sp - cp);
        printf("You have made a profit of Rs.%.2f\n", dif);
    }
    else
    {
        printf("You have neither made a profit nor a loss!!!");
    }

    return 0;
}