#include<stdio.h>
int main()
{
    int i,j,row;
    printf("enter to required row");
    scanf("%d",&row);
    for(i=1;i<=row;++i)
    {
        for(j=row;j>=i;--j)
        {
            printf("* ");
        }
        printf("\n");
    }
}