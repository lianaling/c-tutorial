// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_max(int op, int *max, int k){
		if((op > *max) && (op < k)){
				*max = op;
		}
}

void calculate_the_maximum(int n, int k){
		// Split n into a & b
		// Where a has a range from 1 to n, inclusive
		// Where b has a range from a + 1 to n
		// Double for loop, outer loop = a, inner loop b
		// In the inner loop, perform bitwise operations
		// Compare max
		int max_and = 0, max_or = 0, max_xor = 0;
		for(int a = 1; a <= n; a++){
				for(int b = a + 1; b <= n; b++){
						int and = a & b;
						int or = a | b;
						int xor = a ^ b;

						calculate_max(and, &max_and, k);
						calculate_max(or, &max_or, k);
						calculate_max(xor, &max_xor, k);
				}
		}

		printf("%d\n", max_and);
		printf("%d\n", max_or);
		printf("%d\n", max_xor);
}

int main(){
		int n, k;
		
		scanf("%d %d", &n, &k);
		calculate_the_maximum(n, k);

		return 0;
}
