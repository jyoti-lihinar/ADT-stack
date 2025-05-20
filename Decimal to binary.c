#include <stdio.h>

#define MAX 100

int main() {
    int stack[MAX];
    int top = -1;
    int decimal, i;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Push remainders to stack
    int num = decimal;
    while (num > 0) {
        top++;
        stack[top] = num % 2;
        num = num / 2;
    }

    // Print binary by popping from stack
    printf("Binary of %d is: ", decimal);
    for (i = top; i >= 0; i--) {
        printf("%d", stack[i]);
    }

    if (decimal == 0) {
        printf("0");
    }

    printf("\n");

    return 0;
}
