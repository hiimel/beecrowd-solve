// Link : https://judge.beecrowd.com/en/problems/view/1060

#include<stdio.h>

int  main() {
    float number[6];
    int count = 0;

    for(int i = 0; i < 6; i++) {
        scanf("%f", &number[i]);
    }

    for(int i = 0; i < 6; i++) {
        if(number [i] > 0) {
            count++;
        }
    }

    printf("%d valores positivos\n", count);
    return 0;
}
