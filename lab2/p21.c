#include<stdio.h>/

int main()
{
    int a[10],i,num,occr=0,s;
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
    printf("%d occurred %d time \n",num,occr);
    printf("need replace number by: ");
    scanf("%d",&s);
    for(i=1;i<=10;i++)
    {
        if(a[i] == num)
        {
            a[i] = s;
        }
        printf("new arry=%d \n",a[i]);
    }
     
}

