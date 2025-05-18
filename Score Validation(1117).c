// Link : https://judge.beecrowd.com/en/problems/view/1117

#include<stdio.h>

int main() {
    float valid_score, score_1, score_2;
    float sum = 0, count = 0, average;

    while (1) {
        scanf("%f", &valid_score);

        if (valid_score >= 0.0 && valid_score <= 10.0) {
            sum += valid_score;
            count++;

            if(count == 2) {
                break;
            }
        } else {
            printf("nota invalida\n");
        }
    }
    average = sum / 2.0;
    printf("media = %.2f\n", average);

    return 0;
}