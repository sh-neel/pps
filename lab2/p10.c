#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    float a,b;
    label:
    printf("Enter the Number= ");
    scanf("%f",&a);
    printf("Enter the char=");
    scanf(" %c",&ch);
    printf("Enter the Number=");
    scanf("%f",&b);

    switch(ch)
    {

        case '+' : 
        printf("Addition=%.2f\n",a+b);
        break; 


        case '-' : printf("Subraction=%.2f\n",a-b);
        break;


        case '/' : printf("Divide=%.2f\n",a/b);
        break;


        case '*' : printf("Multiple=%.2f\n",a*b);
        break;

    }

return 0;
}