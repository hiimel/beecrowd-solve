// Link : https://judge.beecrowd.com/en/problems/view/1099

#include <stdio.h>

int main() {
    int N, X, Y;
    int sum = 0, i;

    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &X, &Y);

        if(X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        sum = 0;
        for (i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
