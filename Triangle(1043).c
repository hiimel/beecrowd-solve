// Link : https://judge.beecrowd.com/en/problems/view/1043

#include<stdio.h>

int main() {
    float a, b, c;
    float perimeter, area;

    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a) {
        perimeter = a + b + c;
        printf("Perimetro = %.1f\n", perimeter);
    } else {
        area = ((a + b) * c) / 2.0;
        printf("Area = %.1f\n", area);
    }
    return 0;
}
 