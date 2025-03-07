#include <stdio.h>
int main() {
    int n;
    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for numbers
            printf("%d", j);
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}