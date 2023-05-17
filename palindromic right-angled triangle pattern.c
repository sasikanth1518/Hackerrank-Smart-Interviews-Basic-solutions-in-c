#include<stdio.h>
int main()
{
    int i,j,r,c=0;
    scanf("%d",&r);
    for(i=0;i<2*r;i=i+2)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",'A'+c);
            if(j<i/2)
                c++;
            else
                c--;
        }
        c=0;
        printf("\n");
    }
}
