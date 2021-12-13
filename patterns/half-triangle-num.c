// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = n - 1; i >= 0; i--){
        for(int j = 1; j <= n - i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}