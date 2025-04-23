//Link: https://judge.beecrowd.com/en/problems/view/1010

#include<stdio.h>

int main() {
    int product_code1, product_code2, units_1, units_2;
    float price1, price2, result;

    scanf("%d %d", &product_code1, &units_1);
    scanf("%f", &price1);

    scanf("%d %d",&product_code2, &units_2);
    scanf("%f", &price2);

    result = (units_1 * price1) + (units_2 * price2);
    printf("VALOR A PAGAR: R$ %0.2lf\n",result);

    return 0;
}
