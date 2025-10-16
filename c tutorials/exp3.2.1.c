#include<stdio.h>
void main(){
    int number;
    char choice;
   int positive=0, zero=0, negative=0;
   do{
    printf("enter a number");
    scanf("%d",&number);
    if(number>0)
    positive++;
   else if(number<0)
   negative--;
   else zero;
   printf("do you want to enter another no.?(y/n):");
   scanf(" %c",&choice);}
   while(choice=='y'||choice=='Y');
   if(number>0){
   printf("count of postive number=%d",positive);}
   else if(number<0){
    printf("count of negative number=%d",negative);}
    else{
     printf("count of zeroes=%d",zero);}
}