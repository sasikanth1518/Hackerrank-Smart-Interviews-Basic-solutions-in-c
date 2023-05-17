#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int i, j, N, columns;
    scanf("%d",&N);

    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        
            
        {
            columns++;
        }
        else
        {
            columns--;
        }
        printf("\n");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
