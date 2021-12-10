/*
To write an absolute function in C
*/

#include <stdio.h>

double _abs(double f){
    // If is negative, * -1
    if(f < 0){
        return f * -1;
    }
    return f;
}

int main(){
    for(int i = -5; i < 5; i++){
        printf("%0.1f ", _abs(i));
    }
}