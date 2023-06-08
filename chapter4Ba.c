/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs.12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.*/
#include<stdio.h>
int main()
{
    int total_pay,hours;

    for(int i=1;i<=10;i++)
    {
        printf("Enter hours you have overtimed!!!!");

        scanf("%d",&hours);

        hours=hours-40;

        if(hours<=0)
        {
            printf("You have not done any overtime!!!\n");
        }

        else
        {
            total_pay=12*hours;

            printf("Your overtime pay is : %d\n",total_pay);
        }
    }

    return 0;
}