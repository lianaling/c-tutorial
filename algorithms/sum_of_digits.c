/*
 * Given an integer n of x digits, for example 5 digits, 12345, find the sum of the individual digits added together.
 * */

#include <stdio.h>

int sum_digits(int n){
	int sum = 0;
	for(; n > 0 ;){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	printf("Sum of %d: %d\n", n, sum_digits(n));
	return 0;
}
