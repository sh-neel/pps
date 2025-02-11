#include <stdio.h>

int main()
{
  int i,j,rows;
  char a='A';
  printf("enter rows: ");
  scanf("%d",&rows);
  for(i=rows;i>=1;i--)
  {
      for(j=1;j<=i;j++)
      {
          printf("%c ",a);
      }
      printf("\n");
      a++;
  }

    return 0;
}