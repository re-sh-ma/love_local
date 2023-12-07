/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int lastwordcount(char[]);

int main() {
    char str[1000];
    int strcount;

    printf("Enter the string: \n");
    fgets(str, sizeof(str), stdin);

    strcount = lastwordcount(str);

    printf("The length of the last word is: %d\n", strcount);

    return 0;
}

int lastwordcount(char str[]) {
    int count = strlen(str);
    int result = 0;

    for (int i = count - 1; i > 0; i--) {
        if (str[i - 1] != ' ') {
            result++;
        } else {
            break;
        }
    }

    return result;
}
