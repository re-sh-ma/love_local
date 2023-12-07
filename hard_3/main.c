/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int countDigitOne(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 1) {
                count++;
            }
            num /= 10;
        }
    }

    return count;
}

int main() {
    // Example usage
    int n;
    printf("Enter the number :\n");
    scanf("%d", &n);
    int result = countDigitOne(n);

    printf("Total number of digit 1 appearing in numbers up to %d: %d\n", n, result);

    return 0;
}

