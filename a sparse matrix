#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,i,j,a[100][100],count=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    int c=(n*m)/2;
    if(count>c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
