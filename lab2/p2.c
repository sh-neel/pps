#include <stdio.h>
#define P printf
#define S scanf
int main(){
    int h,b;
    float area;
    P("enter hight: ");
    S("%d",&h);
    P("enter base: ");
    S("%d",&b);
    area=h*b*.5;
    P("area of triangle=%.3f",area);
}