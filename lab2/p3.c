#include<stdio.h>
#define P printf
#define S scanf
int main(){
    int p,n;
    float r,i,total;
    P("enter principal of amount ");
    S("%d",&p);
    P("enter number of year ");
    S("%d",&n);
    P("enter rate of intrest ");
    S("%f",&r);
    
    i=(p*r*n)/100;
    P("\nsimple intrest=%.3f",i);
    total=p+i;
    P("\ntotal=%.3f",total);

}