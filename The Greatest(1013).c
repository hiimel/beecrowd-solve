//Link : https://judge.beecrowd.com/en/problems/view/1013

#include<stdio.h>

int main() {
    int a, b, c, MaiorAB, Max;

    scanf("%d %d %d", &a, &b, &c);

    MaiorAB = (a + b + abs(a - b)) / 2;
    Max = (MaiorAB + c + abs(MaiorAB - c)) / 2;

    printf("%d eh o maior\n", Max);

    return 0;
}
