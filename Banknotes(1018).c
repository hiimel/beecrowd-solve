// Link : https://judge.beecrowd.com/en/problems/view/1018

#include <stdio.h>

int main() {

    int Value;
    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    int count[7];

    scanf("%d", &Value);

    for (int i = 0; i < 7; i++) {
        count[i] = Value / notes[i];
        Value %= notes[i];

    }
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", count[i], notes[i]);
    }
    return 0;
}
