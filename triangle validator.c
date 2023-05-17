#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    long x,y,z;
    x=a+b;
    y=b+c;
    z=a+c;
    if(x>c && y>a && z>b)
        printf("Yes");
    else
        printf("No");
    return 0;
}
