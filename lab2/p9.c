#include<stdio.h>
#define P printf
#define S scanf
int main(){
    int a;
    P("enter a; ");
    S("%d",&a);
    if(a<40){
        P("fail");
    }
    else if(a>=40 && a<59)
    {
        P("second class/n");
    }
    else if(a>=60 && a<79)
    {
         P("firts class/n");
    }
    else{
        P("distiction/n");

    }
}
