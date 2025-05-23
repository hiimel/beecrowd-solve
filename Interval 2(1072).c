// Link : https://judge.beecrowd.com/en/problems/view/1072

#include<stdio.h>

int main() {
    int N, X;
    int in = 0, out = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &X);

        if(X >= 10 && X <= 20) {
            in++;
        } else {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}