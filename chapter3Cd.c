/*According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year*/

#include <stdio.h>

int main()
{
    int year, day, month = 1;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Zeller's Congruence algorithm
    if (month <= 2)
    {
        month += 12;
        year--;
    }

    day = (1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    // Determine the day of the week
    switch (day)
    {
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    }

    return 0;
}
