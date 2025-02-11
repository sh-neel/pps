#include <stdio.h>
int main()
{
    int i,j,k,rows;
    printf("enter rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(k=rows;k>i;k--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }

}

