#include<stdio.h>

int main()

{
    int a[10],max,min,i,j;
    for(i=0;i<10;i++)
    {
        printf("number %d ",i+1);
        scanf("%d",&a[i]);
    }
     max = min =a[0];
     for(j=1;j<10;j++)
     {
        if(a[j]>max)
        {
            max=a[j];
        }
        if(a[j]<min)
        {
            min=a[j];
        }
     }
     printf("maximum=%d\n",max);
     printf("minimum=%d\n",min);
}