// link:https://judge.beecrowd.com/en/problems/view/1006

#include<stdio.h>
int main() {
    double A, B, C, MEDIA;
    scanf("%lf %lf %lf", &A, &B, &C);

    double avg = (A * 2 + B * 3 +C * 5) / 10;
    printf("MEDIA = %.1lf\n", avg);

    return 0;
}

