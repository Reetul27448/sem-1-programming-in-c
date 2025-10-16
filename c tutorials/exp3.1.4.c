#include<stdio.h>
void main(){
    int year;
    printf("enter year");
    scanf("%d",&year);
    int days=0;
    for(int i=1;i<year;i++){
    if((i%400==0)||(i%4==0 && i%100!=0)){days+=366;}
    else{days+=365;}
    }
    days = days%7;
    printf("01/01/%d was",year);
    switch(days){
        case 0: printf("monday"); break;
        case 1: printf("tuesday"); break;
        case 2: printf("wednesday"); break;
        case 3: printf("thursday"); break;
        case 4: printf("friday"); break;
        case 5: printf("satday"); break;
        case 6: printf("sunday"); break;
    }


}