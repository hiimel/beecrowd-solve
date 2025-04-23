// Link : https://judge.beecrowd.com/en/problems/view/1017

#include<stdio.h>

int main() {
    int a, b;
    float spent_fuel;

    scanf("%d %d", &a, &b);

    spent_fuel = (a * b) / 12.0;
    printf("%.3f\n", spent_fuel);

    return 0;
}
