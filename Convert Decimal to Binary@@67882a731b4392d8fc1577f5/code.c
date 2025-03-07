#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits (max 32 bits for int)
    int index = 0;

    if (num == 0) {
        printf("0");
       
    }

    while (num > 0) {
        binary[index++] = num & 1; // Get the last bit using bitwise AND
        num = num >> 1; // Right shift the number to process the next bit
    }

    // Print binary in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    return 0;
}
