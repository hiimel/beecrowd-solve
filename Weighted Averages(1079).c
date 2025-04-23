// Link : https://judge.beecrowd.com/en/problems/view/1079

#include <stdio.h>

int main() {
    int N;
    float a, b, c;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%f %f %f", &a, &b, &c);

        float weightedAverage = (a * 2 + b * 3 + c * 5) / 10.0;

        printf("%.1f\n", weightedAverage);
    }

    return 0;
}
