// Link: https://judge.beecrowd.com/en/problems/view/1007

#include<stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int result = (A*B - C*D);

    printf("DIFERENCA = %d", result);
    return 0;
}
