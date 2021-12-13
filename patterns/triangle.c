//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int k = 0;
    for(int i = n; i > 0; i--){
        for(int j = -n + 1; j < n; j++){
            if(abs(j) > k){
                printf("  ");
            } else {
                printf("%c ", '*');
            }
        }
        k++;
        printf("\n");
    }
    return 0;
}