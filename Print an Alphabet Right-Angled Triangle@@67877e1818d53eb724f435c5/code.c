#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (char ch = 'A'; ch < 'A' + i; ch++) {  // Loop for alphabets
            printf("%c ", ch);
        }
        printf("\n"); // Move to the next line
    }
}

