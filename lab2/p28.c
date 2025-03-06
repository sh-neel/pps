#include<stdio.h>

int main()
{
    char s[50],n[50],i;

    printf("enter string s: ");
    fgets(s,sizeof(s),stdin);

    for(i=0;s[i]!='\0';i++)
    {
        n[i]=s[i];

    }
    n[i]='\0';
    printf("copied string: %s",n);
}