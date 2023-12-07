/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void findMajorityElements(int nums[], int n) {
    if (n == 0) {
        return;
    }

    // Initialize candidates and counters
    int candidate1 = 0, candidate2 = 0;
    int count1 = 0, count2 = 0;

    // Step 1: Find candidates
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate1) {
            count1++;
        } else if (nums[i] == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = nums[i];
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = nums[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    // Step 2: Count occurrences of candidates
    count1 = 0;
    count2 = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate1) {
            count1++;
        } else if (nums[i] == candidate2) {
            count2++;
        }
    }

    // Step 3: Check if candidates appear more than n/3 times
    if (count1 > n / 3) {
        printf("%d ", candidate1);
    }
    if (count2 > n / 3 && candidate1 != candidate2) {
        printf("%d ", candidate2);
    }
}

int main() {
    // Example usage
    int nums[] = {3, 3, 3, 7, 7, 7, 1, 2, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Elements appearing more than n/3 times: ");
    findMajorityElements(nums, n);

    return 0;
}

