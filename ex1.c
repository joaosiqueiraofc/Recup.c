#include <stdio.h>

int main() {
    int valor1, valor2, valor3, valor4;

    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);
    scanf("%d", &valor4);

    if ((valor2 > valor3) && (valor4 > valor1) && (valor3 + valor4 > valor2 + valor1) &&
        (valor3 > 0) && (valor4 > 0) && (valor1 % 2 == 0)) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
