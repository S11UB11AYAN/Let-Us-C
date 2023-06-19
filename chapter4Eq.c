/*If Loan amount, Number of months and Rate of Interest are entered through the keyboard, write a program to calculate the monthly installment (including contribution towards Principal and Interest) for each month of loan duration*/

#include <stdio.h>
#include <math.h>

void calculateLoanSchedule(double loanAmount, int numberOfMonths, double interestRate)
{
    double monthlyInterestRate = interestRate / 12.0;
    double monthlyInstallment = loanAmount * monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -numberOfMonths));

    printf("Month\tPrincipal\tInterest\tInstallment\tBalance\n");

    double balance = loanAmount;
    for (int month = 1; month <= numberOfMonths; month++)
    {
        double interest = balance * monthlyInterestRate;
        double principal = monthlyInstallment - interest;
        balance -= principal;

        printf("%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", month, principal, interest, monthlyInstallment, balance);
    }
}

int main()
{
    double loanAmount;
    int numberOfMonths;
    double interestRate;

    printf("Enter the loan amount: ");
    scanf("%lf", &loanAmount);

    printf("Enter the number of months: ");
    scanf("%d", &numberOfMonths);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &interestRate);

    calculateLoanSchedule(loanAmount, numberOfMonths, interestRate);

    return 0;
}
