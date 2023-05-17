#include<stdio.h>
int main()
{
    int long long n,n1,rem=0,sum=0;
    scanf("%lld",&n);
    n1=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(n1%sum==0)
        printf("Yes",n1);
    else
        printf("No",n1);
}
