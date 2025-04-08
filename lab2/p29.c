#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int length=0 ,i;

    printf("enter string s1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("enter string s2: ");
    fgets(s2, sizeof(s2), stdin);

    while(s1[length] != '\n')
    {
       length++;
    }
    for (i=0 ; s2[i] != '\n' ; i++,length++)  
    {
        s1[length] = s2[i];
    }

    s1[length] = '\0';

    printf("after concaqtion: ");
    puts(s1);

    


}