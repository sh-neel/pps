#include <stdio.h>
int main()
{
    int i,j,k,rows;
    printf("enter rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(k=1;k<i;k++){
            
        printf("  ");
        }
        for(j=rows;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}

