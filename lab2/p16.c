#include<stdio.h>
#define P printf
#define S scanf

int main()
{
    int rows,i,j,a;
    P("enter required rows: ");
    S("%d",& rows);

    for(i=0;i<rows;i++) // i = 0 -> 4
    {
        // for(j=0;j<rows-i-1;j++)
        for (j = rows; j > i; j--) // j = rows -> i (5 -> 1)
        {
            P("*");
        }
        a = 1;
        for(j = 0; j <= i; j++) // j = 0 -> i (1 -> 5)
        {
            P("#%d", a);
            a = a * (i-j) / (j+1);
        }
        P("\n");
    }
}