#include <stdio.h>

// Practical 4: Decimal to Binary Conversion using Stack

int main(void) {
    unsigned int n;
    int stack[32], top = -1;
    printf("Enter a non-negative decimal number: ");
    if (scanf("%u", &n) != 1) { printf("Invalid input.\n"); return 1; }
    if (n == 0) { printf("Binary number: 0\n"); return 0; }
    while (n > 0) { stack[++top] = n % 2; n /= 2; }
    printf("Binary number: ");
    while (top >= 0) printf("%d", stack[top--]);
    printf("\n");
    return 0;
}
