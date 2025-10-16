#include<stdio.h>
void main(){
float x1;
printf("enter x1\n");
scanf("%f",&x1);
float y1;
printf("enter y1\n");
scanf("%f",&y1);
float x2;
printf("enter x2\n");
scanf("%f",&x2);
float y2;
printf("enter y2\n");
scanf("%f",&y2);
float x3;
printf("enter x3\n");
scanf("%f",&x3);
float y3;
printf("enter y3\n");
scanf("%f",&y3);
float area =(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
printf("%f",area);
if(area==0){printf("points are collinear");}
else{printf("points are not collinear");}
}