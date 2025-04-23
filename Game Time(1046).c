// Link : https://judge.beecrowd.com/en/problems/view/1046

#include<stdio.h>

int main() {
    int a, b, duration;

    scanf("%d %d", &a, &b);

    if(a >= b)  {
        duration = (24 - a) + b;
    } else {
        duration = b - a;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;

}
