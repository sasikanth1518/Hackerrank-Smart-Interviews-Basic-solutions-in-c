#include<stdio.h>
int main()
{
    char s[1000],c;
    int i,count=0;
    gets(s);
    c=getchar();
    for(i=0;s[i];i++)
        if(s[i]==c)
            count++;
    printf("%d",count);
    return 0;
}
