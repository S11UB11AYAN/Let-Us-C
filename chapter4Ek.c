/*When interest compounds q times per year at an annual rate r% for n years, the principal p compounds to an amount a as per the following formula

a = p (1 + r / q )^nq

Write a program to read 10 sets of p, r, n & q and calculate the corresponding 'a's
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float p,a,r;
    int q,n;
    for(int i=1;i<=10;i++)
    {
        printf("Enter the principal amount \'p\': ");
        scanf("%f",&p);
        printf("Enter the rate of interest \'r\' : ");
        scanf("%f",&r);
        printf("Enter number of years \'n\' : ");
        scanf("%d",&n);
        printf("Enter the number of times the interest \'q\' :");
        scanf("%d",&q);

        a=p*pow((1+r/q),n*q);

        printf("The final amount is : %.3f\n",a);

    }
}

