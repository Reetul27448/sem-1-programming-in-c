#include<stdio.h>
void main(){
    float weight;
    printf("enter you weight");
    scanf("%f",&weight);
    float height;
    printf("enter you height in mtrs");
    scanf("%f",&height);
    float bmi=weight/(height*height);
    printf("your bmi is %f",bmi);
    if(bmi<15){printf("starvation\n ");}
    else if(bmi>15.1 && bmi<17.5){printf("anorexic");}
    else if(bmi>17.6 && bmi<18.5){printf("underweight");}
    else if(bmi>18.6 && bmi<24.9){printf("ideal");}
     else if(bmi>25 && bmi<25.9){printf("overweight");}
     else if(bmi>30 && bmi<39.9){printf("obese");}
     else if(bmi>40){printf("morbdity obese");}
      else{printf("bmi is not valid.");}
}