#include<stdio.h>
#define P printf
#define S scanf
int main()
{
    int a,b,c;
    P("enter a: ");
    S("%d",&a);
    P("enter b: ");
    S("%d",&b);
    P("enter c: ");
    S("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            P("\n maximum=%d",a);
        }
    }
        else if(c>b)
    {
        if(a<c)
        {
            P("\n maximum=%d",c);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            P("\n maximum=%d",b);
        }
    }
    
        
}
