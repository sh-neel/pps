#include<stdio.h>
#define P printf
int main()
{
    int a,b,r,rev=0,c;
    P("enter number: ");
    scanf("%d",&a);
    b=a%10;
    while(a > 0){
        r=a%10;
        rev=rev*10 + r;
        a=a/10;
    }
    
    c=rev%10;
printf("Addition= %d\n",b+c);

return 0;
}