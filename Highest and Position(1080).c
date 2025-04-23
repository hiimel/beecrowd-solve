// Link : https://judge.beecrowd.com/en/problems/view/1080

#include<stdio.h>

int main() {
    int number, maximum = 0, positon = 0; 

    for(int i = 1; i <= 1000; i++) {
        scanf("%d", &number);

        if(number > maximum) {
            maximum = number;
            positon = i; 
        }
    }

    printf("%d\n", maximum);
    printf("%d\n", positon);

    return 0;
}