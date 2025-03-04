#include<stdio.h>/

int main()
{
    int a[10],i,num,occr=0;
    for(i=1;i<=10;i++)
    {
    printf("enter %d elements: ",i);
    scanf("%d",&a[i]);
    }

    printf("enter need repeated number:  ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        if(a[i] == num)
        {
            occr++;
        }
    }
    printf("%d occurred %d /n",num,occr);
}
