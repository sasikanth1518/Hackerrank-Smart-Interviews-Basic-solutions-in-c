#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }   
    return 0;
}
