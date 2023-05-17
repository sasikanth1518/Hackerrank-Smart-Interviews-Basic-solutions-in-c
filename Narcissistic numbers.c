#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int long long n,ori,rem,sum=0,digit=0;
    scanf("%lld",&n);
    ori=n;
    while(n!=0)
    {
        digit++;
        n=n/10;
    }
    n=ori;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,digit);
        n=n/10;
    }
    if(sum==ori)
        printf("Yes",ori);
    else
        printf("No",ori);
    return 0;
}
