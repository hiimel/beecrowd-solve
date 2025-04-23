// Link : https://judge.beecrowd.com/en/problems/view/1047

#include <stdio.h>

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int start_total_minutes = a * 60 + b;
    int end_total_minutes = c * 60 + d;

    if (end_total_minutes <= start_total_minutes) {
        end_total_minutes += 1440;
    }

    int duration_minutes = end_total_minutes - start_total_minutes;

    int duration_hours = duration_minutes / 60;
    duration_minutes = duration_minutes % 60;

    if (duration_hours == 24 && duration_minutes == 0) {
        duration_hours = 24;
        duration_minutes = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hours, duration_minutes);

    return 0;
}
