#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,i,j,x[100][100],y[100][100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&x[i][j]);
    }for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&y[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d\t",x[i][j]+y[i][j]);
        printf("\n");
    }
    
    return 0;
}
