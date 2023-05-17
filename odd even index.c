#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100];
    int i,l;
    scanf("%[^\n]%*c",a);
    l=strlen(a);
    for(i=1;i<l;i=i+2){
        printf("%c",a[i]);
    }
     for(i=0;i<l;i=i+2){
        printf("%c",a[i]);
     }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
