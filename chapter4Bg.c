/*Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeroes entered.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int pos,nos,zeros,num;
    char choice;

    while(choice!='n')
    {
        printf("Do you want to enter a number : [y]es or [n]o ");
        getchar();
        scanf("%c",&choice);
        if(choice=='n')
        {
            break;
        }

        else
        {
            printf("Enter a number: ");
            scanf("%d",&num);

            if(num>0)
            {
                pos++;
            }

            else if(num==0)
            {
                zeros++;
            }

            else if(num<0)
            {
                nos++;
            }

            else
            {
                printf("Invalid input try again!!!\n");
            }
        }
    }
        printf("Positive numbers %d\n",pos);
        printf("Negative numbers %d\n",nos);
        printf("Zeroes %d\n",zeros);

        return 0;
}