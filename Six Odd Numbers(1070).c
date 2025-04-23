// Link : https://judge.beecrowd.com/en/problems/view/1070

#include<stdio.h>

int main() {
    int X, count = 0;

    scanf("%d", &X);

    if (X % 2 == 0) {
        X++;
    }

    do {
        printf("%d\n", X);
        X += 2;
        count++;
    } while (count < 6);

    return 0;
}
