#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5], n = 5, countzero = 0, countone = 0, counttwo = 0;
    int x, i;

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            countzero++;
        } else if (a[i] == 1) {
            countone++;
        } else if (a[i] == 2) {
            counttwo++;
        }
    }

    for (i = 0; i < countzero; i++)
        a[i] = 0;

    x = countzero + countone;

    for (i = countzero; i < x; i++)
        a[i] = 1;

    for (i = x; i < n; i++)
        a[i] = 2;

    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
