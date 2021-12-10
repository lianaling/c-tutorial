#include <stdio.h>

int max_of_four(int, int, int, int);


int max_of_four(int a, int b, int c, int d) {

    int tmp = 0,
    swap = 0,
    list[4] = {
        a,
        b,
        c,
        d
    };

    int size = sizeof(list) - sizeof(list[0]);

    // Bubble sort

    do {

        int cnt = 0;

        for(int i = 0; i < size - 1; i++) {

            if(list[i] > list[i+1]) {

                tmp = list[i];

                list[i] = list[i+1];

                list[i+1] = tmp;

                cnt++;

            }

        }

        if(cnt != 0) {

            swap = 1;

        } else {

            swap = 0;

        }

    } while(swap == 0);



    return list[size - 1];

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
