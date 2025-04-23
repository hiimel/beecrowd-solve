//Link: https://judge.beecrowd.com/en/problems/view/1008

#include <stdio.h>

int main() {
    int employee_number, Work_hours;
    float per_hours, salary;

    scanf("%d", &employee_number);
    scanf("%d", &Work_hours);
    scanf("%f", &per_hours);

    salary = Work_hours * per_hours;

    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}

