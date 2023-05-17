#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,a,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {a=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=n-j;
        }
        printf("\n");
    }  
    return 0;
}
