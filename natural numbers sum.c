#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long sum=0,i,m;
    scanf("%ld",&m);
    for(i=1;i<=m;i++)
    {
        sum=sum+i;
    }
    printf("%ld",sum);
}
