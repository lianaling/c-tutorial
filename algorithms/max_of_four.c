#include <stdio.h>

int max_of_four(int, int, int, int);

int max_of_four(int a, int b, int c, int d){
    int m1, m2;
    return ((m1 = (a > b) ? a : b) > (m2 = (c > d) ? c : d) ? m1 : m2);
}


int main() {

    int a,
    b,
    c,
    d;

    printf("Insert four integers on one line separated with a space:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);   

    printf("Max number: %d\n", ans);



    return 0;
}
