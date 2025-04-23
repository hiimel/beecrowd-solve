// Link : https://judge.beecrowd.com/en/problems/view/1064

#include<stdio.h>

int  main() {
    float number[6];
    int count = 0;
    float sum = 0.0;

    for(int i = 0; i < 6; i++) {
        scanf("%f", &number[i]);
    }

    for(int i = 0; i < 6; i++) {
        if(number [i] > 0) {
            count++;
            sum += number[i];
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum / count);
    
    return 0;
}
