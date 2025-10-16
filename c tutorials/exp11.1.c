#include <stdio.h>
#include <stdint.h>
void printBinary(uint8_t num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);}}
int main() {
    uint8_t a = 0b10101010; 
    uint8_t b = 0b11001100;  
     printf("Initial values:\n");
    printf("a = %d (binary: ", a); printBinary(a); printf(")\n");
    printf("b = %d (binary: ", b); printBinary(b); printf(")\n\n");
    uint8_t result_and = a & b;
    printf("AND Operation (a & b):\n");
    printf("Result = %d (binary: ", result_and); printBinary(result_and); printf(")\n\n");
    uint8_t result_or = a | b;
    printf("OR Operation (a | b):\n");
    printf("Result = %d (binary: ", result_or); printBinary(result_or); printf(")\n\n");
    uint8_t result_not = ~a;
    printf("NOT Operation (~a):\n");
    printf("Result = %d (binary: ", result_not); printBinary(result_not); printf(")\n");

    return 0;
}
