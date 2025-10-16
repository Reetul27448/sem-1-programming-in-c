#include <stdio.h>
void staticCounterFunction() {
    static int staticCounter = 0;  
    staticCounter++;
    printf("staticCounter = %d\n", staticCounter);}
void regularCounterFunction() {
    int regularCounter = 0;  
    regularCounter++;
    printf("regularCounter = %d\n", regularCounter);}
     int main() {
    printf("Calling both functions 3 times:\n\n");
     for (int i = 0; i < 3; i++) {
        printf("Call #%d:\n", i + 1);
        staticCounterFunction();
        regularCounterFunction();
        printf("\n");}
     return 0;}
