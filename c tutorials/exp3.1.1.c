#include<stdio.h>
void main(){
    float a;
    printf("enter a");
    scanf("%f",&a);
    float b;
    printf("enter b");
    scanf("%f",&b);
    float c;
    printf("enter c");
    scanf("%f",&c);
    if((a+b>c) && (a+c>b) &&(c+b>a)){
    printf("triangle is valid\n");
    if(a==b && b==c){printf ("triangle is equilateral triangle\n");}
    else if(a==b || b==c || c==a){printf("it is an isosceles triangle\n");}
    else if(a*a+b*b==c*c || a*a + c*c==b*b || b*b +c*c==a*a)
    {printf("it is a right angled triangle");}
    else{printf("it is a scelene triangle\n");}}
    else{printf("not a valid triangle\n");}

}