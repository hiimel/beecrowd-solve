// Link : https://judge.beecrowd.com/en/problems/view/1116

#include<stdio.h>

int main() {
    int X, Y, N;
    float result;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        scanf("%d %d", &X, &Y);

        if(Y == 0) {
            printf("divisao impossivel\n");
        } else {
            result = (float) X / Y;
            printf("%.1f\n", result);
        }
    }

    return 0;
}