/*Write a program to receive an integer and find its octal equivalent. Hint: To obtain Octal equivalent of an integer, divide it continuously by 8 till dividend doesn't become zero, then write the remainders obtained in reverse direction.*/

#include <stdio.h>

void decimalToOctal(int decimalNumber) {
    int octalNumber = 0;
    int multiplier = 1;

    while (decimalNumber != 0) {
        int remainder = decimalNumber % 8;
        octalNumber += remainder * multiplier;
        decimalNumber /= 8;
        multiplier *= 10;
    }

    printf("Octal equivalent: %d\n", octalNumber);
}

int main() {
    int decimalNumber;

    printf("Enter an integer: ");
    scanf("%d", &decimalNumber);

    decimalToOctal(decimalNumber);

    return 0;
}

