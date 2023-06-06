/*Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest number in the list*/

#include<stdio.h>
#include<math.h>
int main()
{
    int lim,max=-pow(2,30),min=pow(2,30),num;
    printf("Enter the number of values you want to enter: ");
    scanf("%d",&lim);

    while(lim!=0)
    {
        printf("Enter a number: ");
        scanf("%d",&num);

        if(num>max)
        {
            max=num;
            lim--;
        }
        else if(num<=min)
        {
            min=num;
            lim--;
        }
        else
        {
            lim--;
        }
        


    }

    printf("The result is %d",(max-min));

    return 0;
}
