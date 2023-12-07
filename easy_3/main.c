/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Function to calculate the binomial coefficient C(n, k)
unsigned long long binomialCoefficient(int n, int k) {
    unsigned long long C[n + 1][k + 1];
    
    // Calculate binomial coefficients using dynamic programming
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k && j <= i; j++) {
            if (j == 0 || j == i) {
                // Base cases: C(n, 0) = C(n, n) = 1
                C[i][j] = 1;
            } else {
                // Recurrence relation: C(n, k) = C(n-1, k-1) + C(n-1, k)
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }

    // The result is stored in the last cell of the array
    return C[n][k];
}

// Function to print the first numRows of Pascal's triangle
void generatePascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%llu ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    // Input: Number of rows for Pascal's triangle
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);

    // Output: Print Pascal's triangle
    generatePascalsTriangle(numRows);

    return 0;
}

