#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    long long a[n],b[n];
    for(i = 0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0,j=n;i<n,j>0;i++,j--)
    {
        b[j] = a[i];
    }
    for(i=1;i<=n;i++)
    {
        printf("%lld\t",b[i]);
    }
    return 0;
}
