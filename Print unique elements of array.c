#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,j,n,a[100],count;
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
}
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {if (a[i]==a[j])
            {
count++;
            }
}
}

    if(count==0)
    {
printf("%d\t",a[i]);}}
    return 0;
}
