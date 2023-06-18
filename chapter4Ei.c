/* Write a program to produce the following output: 
                      
                       1
                 1          1
             1         2        1
         1        3          3      1
     1       4         6        4      1
*/

//This pattern is also known as Pascal's Triangle

#include <stdio.h>

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

void generatePascalTriangle(int rows) {
    for (int row = 0; row < rows; row++) {
        for (int space = 0; space < (rows - row - 1) * 3; space++) {
            printf(" ");
        }

        for (int col = 0; col <= row; col++) {
            int coefficient = binomialCoefficient(row, col);
            printf("%-6d", coefficient);
        }

        printf("\n");
    }
}

int main() {
    int rows = 5;
    generatePascalTriangle(rows);
    return 0;
}
