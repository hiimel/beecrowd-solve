// Link : https://judge.beecrowd.com/en/problems/view/1115

#include<stdio.h>

int main() {
    int X, Y;

    while(1) {
        scanf("%d %d", &X, &Y);

        if(X == 0 || Y == 0) {
            break;
        }

        if(X > 0 && Y > 0) {
            printf("primeiro\n");
        } else if(X < 0 && Y > 0) {
            printf("segundo\n");
        } else if(X < 0 && Y < 0) {
            printf("terceiro\n");
        } else {
            printf("quarto\n");
        }
    }

    return 0;
}