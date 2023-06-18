/*The natural logarithm can be approximated by the following series.

//The given series

If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
*/

#include <math.h>
#include <stdio.h>

int main() {
    int x, i;
    float answer = 0;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    for (i = 1; i <= 7; i++) {
        if (i == 1) {
            answer = answer + pow(((float)(x - 1) / x), i);
        } else {
            answer = answer + (0.5 * pow(((float)(x - 1) / x), i));
        }
    }
    
    printf("The final answer is %f", answer);
    
    return 0;
}
