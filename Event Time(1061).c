// Link : https://judge.beecrowd.com/en/problems/view/1061

#include <stdio.h>

int main() {
    int D1, startHours, startMinute, startSecond;
    int D2, endHours, endMinute, endSecond;
    char day1[5], day2[5], del[5];

    scanf("%s %d %d %s %d  %s %d", day1, &D1, &startHours, del, &startMinute, del, &startSecond);

    scanf("%s %d %d %s %d %s %d", day2, &D2, &endHours, del, &endMinute, del, &endSecond);

    int total_start = (D1 * 86400) + (startHours * 3600) + (startMinute * 60) + startSecond;
    int total_end = (D2 * 86400) + (endHours * 3600) + (endMinute * 60) + endSecond;

    int duration = total_end - total_start;

    int w = duration / 86400;
    int x = (duration - w * 86400) / 3600;
    int y = (duration - w * 86400 - x * 3600) / 60;
    int z = (duration - w * 86400 - x * 3600 - y * 60);

    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);

    return 0;
}

