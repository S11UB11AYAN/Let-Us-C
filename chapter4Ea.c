/*Write a program to print all prime numbers from 1 to 300.(Hint use nested loopd, break and continue)*/

#include<stdio.h>
int main()
{

    int flag=0;
    printf("1\n2\n3\n");
    for(int i=4;i<=300;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            else
            {
                continue;
            }
        }

        if(flag!=1)
        {
            printf("%d\n",i);
        }

        flag=0;
    }

    return 0;
}