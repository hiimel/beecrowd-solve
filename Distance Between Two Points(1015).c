// Link : https://judge.beecrowd.com/en/problems/view/1015

#include<stdio.h>
#include<math.h>

int main() {
    double x1, x2, y1, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("%.4lf\n", a);

    return 0;

}
