#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n,i,sum=0;
    scanf("%ld",&n);
    for(i=1;i<n+1;i++)
    {
sum+=(i*i*i);}
    printf("%ld",sum);
    return 0;
}
