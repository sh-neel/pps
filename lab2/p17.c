#include<stdio.h>
#define P printf
#define S scanf
int main()
{ 
    int col,row,a,b;
    P("enter required columms: ");
    S("%d",&a);
    P("enter required rows: ");
    S("%d",&b);
    for(col=1;col<= a;col++)
    {
        for(row=1;row<=b;row++)
        {
            if(col==1 || col==a || row==1 || row==b)
            {
                P("@ ");
            }
            else{
                P("  ");
            }
        }
        P("\n");
    }
}