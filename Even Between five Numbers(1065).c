// Link : https://judge.beecrowd.com/en/problems/view/1065

#include<stdio.h>

int main() {
    int numbers[5];
    int count = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);

        if(numbers[i] % 2 == 0) {
            count++;
        }
    }

    printf("%d valores pares\n", count);
    return 0;
}
