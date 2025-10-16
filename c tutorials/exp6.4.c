#include <stdio.h>
int is_prime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}int main() {
    int lower, upper;
    printf("Enter the lower and upper range to find prime numbers: ");
    scanf("%d %d", &lower, &upper);
       if (lower > upper || lower < 0) {
        printf("Invalid input. Ensure that lower <= upper and both are non-negative.\n");
        return 1;
    }
      printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (is_prime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}