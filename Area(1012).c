//Link: https://judge.beecrowd.com/en/problems/view/1012

#include <stdio.h>

int main() {
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    float triangleArea = (A * C) / 2;

    float circleArea = 3.14159 * C * C;

    float trapeziumArea = ((A + B) * C) / 2;

    float squareArea = B * B;

    float rectangleArea = A * B;

    printf("TRIANGULO: %.3f\n", triangleArea);

    printf("CIRCULO: %.3f\n", circleArea);

    printf("TRAPEZIO: %.3f\n", trapeziumArea);

    printf("QUADRADO: %.3f\n", squareArea);

    printf("RETANGULO: %.3f\n", rectangleArea);

    return 0;
}

