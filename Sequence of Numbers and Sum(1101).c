#include<stdio.h>

int main() {
    int M, N;

    while(1) {
        scanf("%d %d", &M, &N);

        if(M <= 0 || N <= 0) {
            break;
        }

        int sum = 0;

        if(M > N) {
            for (int i = N; i <= M; i++) {
                printf("%d ", i);
                sum += i;
            }
        } else {
            for (int i = M; i <= N; i++) {
                printf("%d ", i);
                sum += i;
            }
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}
