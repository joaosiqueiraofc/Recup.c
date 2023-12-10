#include<stdio.h>

int main() {
    int p, codigo, q;
    float s = 0.0;

    scanf("%d", &p);

    for (int i = 0; i < p; i++) {
        scanf("%d %d", &codigo, &q);

        if (codigo == 1001)
            s += 1.50 * q;
        else if (codigo == 1002)
            s += 2.50 * q;
        else if (codigo == 1003)
            s += 3.50 * q;
        else if (codigo == 1004)
            s += 4.50 * q;
        else if (codigo == 1005)
            s += 5.50 * q;
        else {
            printf("Código inválido\n");
            return 1;
        }
    }

    printf("%.2f\n", s);

    return 0;
}