#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)  // Print spaces
            printf(" ");
        for (int k = 1; k <= 2 * i - 1; k++)  // Print stars
            printf("*");
        printf("\n");
    }
    
    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)  // Print spaces
            printf(" ");
        for (int k = 1; k <= 2 * i - 1; k++)  // Print stars
            printf("*");
        printf("\n");
    }
     return 0;
}


