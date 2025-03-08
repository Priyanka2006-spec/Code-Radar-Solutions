#include <stdio.h>

void FibonacciSeries(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: %d, %d", a, b);

    for (int i = 2; i < n; i++) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
    } else {
        printFibonacciSeries(n);
    }

    return 0;
}
