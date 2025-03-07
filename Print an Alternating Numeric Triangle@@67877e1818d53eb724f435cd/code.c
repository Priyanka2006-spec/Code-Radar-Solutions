#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int start;
    for (int i = 1; i <= n; i++) {  // Loop for rows
        start = (i % 2 == 0) ? 0 : 1;  // Start with 1 for odd rows, 0 for even rows
        for (int j = 1; j <= i; j++) {  // Loop for numbers in each row
            printf("%d ", start);
            start = 1 - start;  // Toggle between 1 and 0
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}