#include <stdio.h>

int main(void)
{
    int rows, i, j;

    printf("Enter number of rows (1-26): ");
    if (scanf("%d", &rows) != 1 || rows < 1 || rows > 26) {
        printf("Invalid number of rows. Enter a value from 1 to 26.\n");
        return 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = i; j < rows - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        for (j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
