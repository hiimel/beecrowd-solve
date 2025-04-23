//Link: https://judge.beecrowd.com/en/problems/view/1011

#include<stdio.h>

int main() {
    double R, result;
    scanf("%lf", &R);

    result = (4.0/3.0) * 3.14159 * R *R * R;

    printf("VOLUME = %0.3f\n", result);
    return 0;
}
