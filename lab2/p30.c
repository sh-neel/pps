#include<stdio.h>
int add(int,int);
float addi(int,int);

int main()
{
    char d[30];
    int a,b,c,i;
    float p,h,k;

    printf("enter number: ");
    scanf("%d",&a);
    printf("enter number: ");
    scanf("%d",&b);

    p=a;
    h=b;

    c=add(a,b);
    k=addi(p,h);

    printf("\n addition (int): %d",c);
    printf("\n addition (float): %f",k);

    return 0;

}

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;


} float addi(int p,int h )
{
    float k;
    k= p+h;
    return k;
}
