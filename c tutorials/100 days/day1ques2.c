//Write a program to input two numbers and display their  difference
#include <stdio.h>
void main() {    

    int number1, number2, difference;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the difference
    difference = number1 - number2;      
    
    printf("%d - %d = %d", number1, number2, difference);
    
}
//for product
#include <stdio.h>
void main() {    

    int number1, number2, product;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the product
    product = number1*number2;      
    
    printf("%d*%d = %d", number1, number2, product);
    
}
// for quotient
#include <stdio.h>
void main() {    

    int number1, number2, quotient;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the quotient
    quotient = number1 - number2;      
    
    printf("%d - %d = %d", number1, number2, quotient);
    
}
