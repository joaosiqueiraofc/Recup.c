#include <stdio.h>

int main() {
    int C;
    scanf("%d", &C);

    while (C > 0) {
        int N;
        scanf("%d", &N);
        int vetor[N];

        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                vetor[i] = 1;
            } else {
                vetor[i] = -1;
            }
        }

        int soma = 0;
        for (int i = 0; i < N; i++) {
            soma += vetor[i];
        }

        printf("%d\n", soma);
        C--;
    }

    return 0;
}