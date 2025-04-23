// Link : https://judge.beecrowd.com/en/problems/view/1042
#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        x = a;
        if (b <= c) {
            y = b;
            z = c;
        } else {
            y = c;
            z = b;
        }
    }
    else if (b <= a && b <= c) {
        x = b;
        if (a <= c) {
            y = a;
            z = c;
        } else {
            y = c;
            z = a;
        }
    }
    else {
        x = c;
        if (a <= b) {
            y = a;
            z = b;
        } else {
            y = b;
            z = a;
        }
    }

    printf("%d\n%d\n%d\n", x, y, z);

    printf("\n");

    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}

