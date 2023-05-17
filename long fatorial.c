#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int i,n;
    scanf("%d",&n);
    long long x=1;
    for(i=1;i<=n;i++)
    {
     x*=i;
    }
    printf("%lld",x);
}
