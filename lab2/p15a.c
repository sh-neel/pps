#include <stdio.h>

int main()
{
  int i,j,rows;
  printf("enter rows: ");
  scanf("%d",&rows);
  for(i=rows;i>=1;i--)
  {
      for(j=1;j<=i;j++)
      {
          printf("%d ",i);
      }
      printf("\n");
  }

    return 0;
}