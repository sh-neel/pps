#include<stdio.h>
int main()
{
    int n;
    int s=0;
    printf("enter required elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        printf("enter the number: ");
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    float average = s / n;
    printf("average=%.2f\n", average);
}
