#include<stdio.h>
#define P printf
int main()
{
    int a=0,b=1,c=0,x;
    P("enter positive number: ");
    scanf("%d",&x);
      P("fibonaci series: %d, %d, ",a,b);
      c=a+b;
    while(c<=x){
        P(" %d, ",c);
        a=b;
        b=c;
        c=a+b;
    }
}