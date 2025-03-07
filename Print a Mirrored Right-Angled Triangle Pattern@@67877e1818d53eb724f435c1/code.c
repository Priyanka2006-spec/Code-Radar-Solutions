#include <stdio.h>

void printMirroredTriangle() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n - i; j++)  // Printing spaces
            printf(" ");
        for (int k = 1; k <= i; k++)  // Printing asterisks
            printf("*");
        printf("\n"); // Move to the next line
    }
    return 0;
}