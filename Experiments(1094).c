// Link : https://judge.beecrowd.com/en/problems/view/1094

#include <stdio.h>

int main() {
    int number, amount;
    int total = 0, totalC = 0;
    int totalR = 0, totalS = 0;
    char ch;

    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        scanf("%d %c", &amount, &ch);

        total += amount;
        if (ch == 'C') {
            totalC += amount;
        } else if (ch == 'R') {
            totalR += amount;
        } else if (ch == 'S') {
            totalS += amount;
        }
    }
      
    double percentageC = (totalC * 100.0) / total;  
    double percentageR = (totalR * 100.0) / total;   
    double percentageS = (totalS * 100.0) / total;
     
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2lf %%\n", percentageC);
    printf("Percentual de ratos: %.2lf %%\n", percentageR);
    printf("Percentual de sapos: %.2lf %%\n", percentageS);
            
    return 0;
}
    

