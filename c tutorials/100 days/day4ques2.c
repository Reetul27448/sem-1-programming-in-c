//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int findSum(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
