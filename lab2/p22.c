#include<stdio.h>
#define P printf
int main()
{
    int i,n,a=0;
    P("enter a positive integer: ");
    scanf("%d",&n);

    if(n==0 || n==1)
    {
        a=1;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(a==0)
    {
        P("%d is a prime number \n",n);
    }
    else
    {
        P("%d is not prime number \n",n);
    }
   
}