#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,vow,con;
    i=vow=con=0;

    gets(str);
    while (str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
              vow++;      
          else
            con++;
        i++;
    }
    printf("%d %d", vow,con);
    return 0;
}
