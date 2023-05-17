#include <stdio.h>
int main() 
{

    long long n,num,rev=0,rem=0;
    scanf("%lld",&num);
    n=num;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%lld",rev);
    return 0;
}
