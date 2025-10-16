#include <stdio.h>
int globalVar = 10;
void myFunction() {
    int localVar = 5;  
    globalVar += 20;

    printf("Inside myFunction:\n");
    printf("localVar = %d\n", localVar);
    printf("globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main:\n");
    printf("globalVar before calling myFunction = %d\n", globalVar);
    myFunction();
    printf("globalVar after calling myFunction = %d\n", globalVar);
return 0;}
