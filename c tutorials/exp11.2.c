#include <stdio.h>
#include <stdint.h>
void printBinary(uint8_t num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}int main() {
    uint8_t value = 0b00011110;
    printf("Original value:\n");
    printf("Decimal: %d\n", value);
    printf("Binary : "); printBinary(value); printf("\n\n");
    uint8_t leftShift = value << 2;
    printf("After left shift by 2 (value << 2):\n");
    printf("Decimal: %d\n", leftShift);
    printf("Binary : "); printBinary(leftShift); printf("\n\n");
    uint8_t rightShift = value >> 2;
    printf("After right shift by 2 (value >> 2):\n");
    printf("Decimal: %d\n", rightShift);
    printf("Binary : "); printBinary(rightShift); printf("\n");

    return 0;
}
