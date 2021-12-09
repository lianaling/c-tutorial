/*
Given an array of numbers, except for one number all the others occur twice. Give an algorithm to find that number which occurs only once in the array.
*/

#include <stdio.h>

int main(){
    int arr[] = {1, 3, 4, 1, 4, 5, 3, 5, 10, 11};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = 0;

    // Iterate through the array
    // Compare each element with all values
    // If duplicated, skip to next element and repeat comparison

    for(i = 0; i < len; i++){
        for(j = 0; j < len; j++){
            if(i != j && arr[i] == arr[j]){ // Same element, stop comparing
                break;
            }
        }
        if(j == len){ // Reached the end of comparison, element is unique
            printf("%d\n", arr[i]);
        }
    }
}