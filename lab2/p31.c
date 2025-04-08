#include<stdio.h>
 
int factorial( int a)
{
    if (a == 0 || a==1)
       return 1;

    return a* factorial(a-1);
}

int main()
{
    int num;

    printf("enter the number: ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("factorial is not defined for nagetive number");
    }
    else{
        printf("factorial od %d will be= %d",num,factorial(num));
    }
    return 0;
;}