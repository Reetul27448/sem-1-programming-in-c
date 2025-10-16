#include <stdio.h>
   int main() {
    int outerVar = 100;  
     printf("In main(): outerVar = %d\n", outerVar);
      {int innerVar1 = 200;
        outerVar += 10;  
        printf("In first inner block:\n");
        printf("innerVar1 = %d\n", innerVar1);
        printf("outerVar = %d\n", outerVar);
    }
       { int innerVar2 = 300;
        outerVar += 20;
        printf("In second inner block:\n");
        printf("innerVar2 = %d\n", innerVar2);
        printf("outerVar = %d\n", outerVar);
    }
    printf("Back in main(): outerVar = %d\n", outerVar);
     return 0;
}
