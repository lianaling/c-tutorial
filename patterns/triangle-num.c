//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int k = 0;
    int p = 1;
    for(int i = n; i > 0; i--){
        for(int j = 0; j < n * 2 - 1; j++){
            if(abs(j) > k){
                printf("  ");
            } else {
                printf("%d ", abs(j) + p);
            }
        }
        k++;
        p++;
        printf("\n");
    }
    return 0;
}