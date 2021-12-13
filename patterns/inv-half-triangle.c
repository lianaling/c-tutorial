// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            printf("%c ", '*');
        }
        printf("\n");
    }

    return 0;
}