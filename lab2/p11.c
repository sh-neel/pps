#include<stdio.h>
int main()
{
    int a,rev=0,r,b;
    
        printf("enter number: ");
        scanf("%d",&a);
        b=a;
        while(a != 0){
            r=a%10;
            rev=(rev*10)+r;
            a=a/10;
        }
        if(b==rev)
          printf("%d is palindrome",b);   
        
        else
            printf("%d is not palindrome",b);
        
    
}