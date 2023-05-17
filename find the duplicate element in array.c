#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i, j,n;
    int a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    for( i=0; i<n; i++)
         {
            for(j=i+1;j<n;j++)
            {
     if(a[i] == a[j])

     {printf("%d",a[i]);
            break;}
        }
        }
}
