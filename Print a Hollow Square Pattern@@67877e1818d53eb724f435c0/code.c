#include <stdio.h>

void printHollowSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Print '*' for first and last row, or first and last column
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("* ");
            } else {
                printf("  "); // Print space for hollow part
            }
        }
        printf("\n");
    }
}

int main() {
    int size;

    // Input size of the square
    printf("Enter the size of the hollow square: ");
    scanf("%d", &size);

    // Call function to print the pattern
    printHollowSquare(size);

    return 0;
}

