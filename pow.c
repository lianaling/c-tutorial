/*
To write a power function in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

double _pow(double base, int exp){
    // If exp is positive, base * base... for exp times
    // Else if exp is negative, 1/base * 1/base for exp times
    // If base & exp = 0, result undefined

    if (exp == 0 && base == 0){ // 0^0
        fprintf(stderr, "Undefined mathematical operation\n");
        exit(-1);
    } else{
        int pos = exp;
        double result = 1;

        if(exp < 0){
            exp *= -1;
        }

        for(;exp > 0; exp--){
            result *= base;
        }

        if(pos < 0){
            return 1/result;
        }

        return result;
    }
}

int main(){
    printf("%0.5f\n", _pow(2, 2));
    printf("%0.5f\n", _pow(2, -2));
    printf("%0.1f\n", _pow(0, 0));
}