#include <stdio.h>
int main(){
    int n,ch ;
    scanf("%c",&ch);
    for (int i = n; i >= 1; i--) {  // Loop for rows
        for (char ch = 'A'; ch < 'A' + i; ch++) {  // Loop for alphabets
            printf("%c", ch);
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}