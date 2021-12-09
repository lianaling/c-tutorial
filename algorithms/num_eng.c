/*
Given a positive integer denoting n, do the following:

If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n > 9, print Greater than 9.
*/

#include <stdio.h>
#include <string.h>

int main(){
    int n = 44;
    // char str[20];
    // // Naive method
    // switch(n){
    //     case 1: strcpy(str, "one"); break;
    //     case 2: strcpy(str, "two"); break;
    //     case 3: strcpy(str, "three"); break;
    //     case 4: strcpy(str, "four"); break;
    //     case 5: strcpy(str, "five"); break;
    //     case 6: strcpy(str, "six"); break;
    //     case 7: strcpy(str, "seven"); break;
    //     case 8: strcpy(str, "eight"); break;
    //     case 9: strcpy(str, "nine"); break;
    //     default: strcpy(str, "Greater than 9");
    // }
    // printf("%s", str);

    char *strings[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("%s\n", n >= 1 && n <= 9 ? strings[n - 1] : "Greater than 9");

    return 0;
}