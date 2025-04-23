// Link : https://judge.beecrowd.com/en/problems/view/1066

#include <stdio.h>

int main() {
    int numbers[5];
    int positive = 0, negative = 0;
    int even = 0, odd = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        if (numbers[i] > 0) {
            positive++;
        } else if (numbers[i] < 0) {
            negative++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}

