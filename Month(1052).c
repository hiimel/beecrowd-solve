// Link : https://judge.beecrowd.com/en/problems/view/1052

#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    char* month[] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December"};

    if(number >= 1 && number <= 12) {
        for(int i = 0; i < 12; i++) {
            if(i == number - 1) {
                printf("%s\n", month[i]);
                break;
            }
        }
    } else {
        printf("Invalid month number\n");
    }

    return 0;
}

