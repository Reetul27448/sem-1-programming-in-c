#include<stdio.h>
void main(){
    int a, b, c, d, n;
    printf("enter your limit\n");
    scanf("%d",&n);
    printf("ramanujan numbers up to %d are:\n",n);
    for(a=1; a<=n;a++){
        for(b=a;b<=n;b++){
            for(b=c;c<=n;c++){
                for(d=c;d<=n;d++){
                    if(a*a*a + b*b*b==c*c*c+d*d*d)&&(a*a*a+ b*b*b<=n)&&!(a==c && b==d)
                    printf("%d=%d^3+%d^3+%d^3=%d^3+%d^3+%d^3\n",a*a*a+b*b*b,a,b,c,d);
                }
            }
        }
    }
}