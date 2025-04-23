// Link : https://judge.beecrowd.com/en/problems/view/1021

#include<stdio.h>

int main() {
    double amount;
    scanf("%lf", &amount);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    int totalcents = (int)(amount * 100 + 0.5);

    printf("NOTAS:\n");

    for(int i=0; i<6; i++) {
        int count = totalcents / notes[i];
        printf("%d nota(s) de R$ %.2f\n", count, notes[i] / 100.0);
        totalcents %= notes[i];
    }

    printf("MOEDAS:\n");

    for(int i=0; i<6; i++) {
        int count = totalcents / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i] / 100.0);
        totalcents %= coins[i];
    }
    
    return 0;
}
