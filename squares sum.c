#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long n,i,sum=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("%lld",sum);
    return 0;
}
