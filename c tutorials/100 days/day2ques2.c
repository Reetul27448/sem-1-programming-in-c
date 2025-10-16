//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
void main(){
int radius;
scanf("%d",&radius);
float pi=3.14;
scanf("%f",&pi);
int area = pi*radius*radius;
printf("area is %f",area);
}
//for circumfrence
#include<stdio.h>
void main(){
int radius;
scanf("%d",&radius);
float pi=3.14;
scanf("%f",&pi);
int area = 2*pi*radius;
printf("area is %f",area);
}