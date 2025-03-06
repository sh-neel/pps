#include<stdio.h>
int main()
{
    int i,n,p,s=0;

    printf("enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        p=i*i;
        s=s+p;
    }
    printf("sum of the series=%d \n",s);
}