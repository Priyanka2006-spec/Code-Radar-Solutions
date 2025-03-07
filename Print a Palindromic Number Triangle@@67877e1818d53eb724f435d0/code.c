#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n - i; j++)  // Printing spaces for alignment
            printf(" ");
        
        for (int k = 1; k <= i; k++)  // Printing numbers in ascending order
            printf("%d", k);
        
        for (int k = i - 1; k >= 1; k--)  // Printing numbers in descending order
            printf("%d", k);
        
        printf("\n"); // Move to the next line
    }
    return 0;
}

