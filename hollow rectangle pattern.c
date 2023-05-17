#include<stdio.h>
int main()
{
    int i,j,row,col;
    scanf("%d %d",&col,&row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==0 || i==row-1 || j==0 || j==col-1)
                printf("*");
            else
                printf(" ");
        }
    printf("\n");
    }
}
