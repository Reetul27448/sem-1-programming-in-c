#include<stdio.h>
void main(){
    int l1,b1,l2,b2,l3,b3;
    int p1,p2,p3,max;
    printf("enter length and breadth of rectangle 1:");
    scanf("%d %d",&l1, &b1);
    printf("enter length and breadth of rectangle 2:");
    scanf("%d %d",&l2, &b2);
    printf("enter length and breadth of rectangle 3:");
    scanf("%d %d",&l3, &b3);
    p1=2*(l1+b1);
    p2=2*(l2+b2);
    p3=2*(l3+b3);
    max=(p1>p2)?((p1>p3)?p1:p3):((p2>p3)?p2:p3);
    printf("perimeter of rectangle 1 is %d\n",p1);
    printf("perimeter of rectangle 2 is %d\n",p2);
    printf("perimeter of rectangle 3 is %d\n",p3);
    printf("the rectangle with the highest perimeter= %d",max);
    }