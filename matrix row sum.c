#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    int a[100][100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {int sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
    }
}
