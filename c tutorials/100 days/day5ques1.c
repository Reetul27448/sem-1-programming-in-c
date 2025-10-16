//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
void main()
{
   int p,r,t;
   float i;
   printf("Enter the Principal, Rate and Time\n");
   scanf("%d %d %d",&p,&r,&t);

   i=p*r*t/100;       

   printf("simple interest is : %f",i);
}
//for compond interest
#include<stdio.h>
#include<math.h>
int main() 
{
	float p,r,t,CI;
	printf("Enter Principle, rate and time\n");
	scanf("%f%f%f",&p,&r,&t);

	CI = p*pow((1+r/100),t);   
	printf("Compound interest is : %f\n", CI);
  return 0;
}

