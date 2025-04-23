// Link : https://judge.beecrowd.com/en/problems/view/1038

#include<stdio.h>

int main() {
    int product_code, quantity;
    float price;

    scanf("%d %d", &product_code, &quantity);

    if(product_code == 1) {
        price = 4.00;
    } else if (product_code == 2) {
        price = 4.50;
    } else if(product_code == 3) {
        price = 5.00;
    } else if(product_code == 4) {
        price = 2.00;
    } else if(product_code == 5) {
        price = 1.50;
    } else {
        price = 0.00;
    }
    float total = price * quantity;

    printf("Total: R$ %.2f\n", total);

    return 0;
}
