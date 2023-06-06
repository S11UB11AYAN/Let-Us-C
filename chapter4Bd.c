/*Write a program to print all the ASCII values and their equivalent characters using a while loop.The ASCII value vary from 0 to 255*/

#include<stdio.h>

int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        printf("%d = %c\n",i,i);
    }

    return 0;
}