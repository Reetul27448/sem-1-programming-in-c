#include<stdio.h>
void main(){
    int year;
    float population=100000;
    for(year=1;year<=10;year++){
        population=population*1.1;
        printf("year %d: %f\n",year,population);
    }
}