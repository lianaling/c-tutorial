// A
// B B
// C C C
// D D D D
// E E E E E

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    char t = 'A';
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n - i; j++){
            printf("%c ", t);
        }
        t += 1;
        printf("\n");
    }

    return 0;
}