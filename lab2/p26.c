#include<stdio.h>

int main()
{
    char str[100];

    printf("enter a string: ");
    gets(str,sizeof(str),stdin);

    int len = 0;

    while (1){
        if (str[len] != '\0') len++;
        else break;
    }
    printf("the length of the string is: %d\n", len);
}