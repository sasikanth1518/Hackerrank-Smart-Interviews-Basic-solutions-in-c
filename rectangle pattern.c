#include<stdio.h>
int main()
{
    int i,j,l;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        for(j=l;j>=1;j--)
        {
            if(j!=i)
                printf("%d",j);
            else
                printf("*");
        }
        printf("\n");
    }
}
