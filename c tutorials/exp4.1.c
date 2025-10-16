#include <stdio.h>
int globalCounter = 0;
void increment() {
    globalCounter++;  
    printf("Inside increment(): globalCounter = %d\n", globalCounter);
}
void display() {
    printf("Inside display(): globalCounter = %d\n", globalCounter);
}
int main() {
    printf("Initial value in main(): globalCounter = %d\n", globalCounter);
     increment();
     display();
     globalCounter += 5;
    printf("After modification in main(): globalCounter = %d\n", globalCounter);
     display();
     return 0;
}
