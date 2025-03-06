#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],sum[3][3],i,j;

    printf("enter elements of 1st matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter elements of a%d%d ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter element od 2nd matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter element b%d%d ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
}