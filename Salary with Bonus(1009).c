//Link: https://judge.beecrowd.com/en/problems/view/1009

#include <stdio.h>

int main() {
    char Name;
    double Salary, Sold, Total;

    scanf("%s", &Name);
    scanf("%lf %lf", &Salary, &Sold);


    Total = Salary + (Sold * 0.15);
    printf("TOTAL = R$ %0.2lf\n", Total);

    return 0;

    }
