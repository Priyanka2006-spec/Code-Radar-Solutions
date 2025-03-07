#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i = n; i >= 1; i--) {  // Loop for rows (starting from n to 1)
        for (int j = 1; j <= i; j++) {  // Loop for numbers in each row
            printf("%d ", j);
        }
          printf("\n"); // Move to the next line
    }
    return 0;
}

