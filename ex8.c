#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int ano;
        scanf("%d", &ano);
        int ano_calculado = ano - 2015;

        if (ano_calculado < 0) {
            printf("%d D.C.\n", -ano_calculado);
        } else if (ano_calculado == 0) {
            printf("1 A.C.\n");
        } else {
            printf("%d A.C.\n", ano_calculado + 1);
        }
    }

    return 0;
}