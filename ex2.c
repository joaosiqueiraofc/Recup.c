#include <stdio.h>

int main() {
    int produto, quantidade;
    float valorTotal;

    printf("Digite o código do produto e a quantidade desejada:\n");
    scanf("%d %d", &produto, &quantidade);

    if (produto == 1) {
        valorTotal = quantidade * 4.0;
    } else if (produto == 2) {
        valorTotal = quantidade * 4.50;
    } else if (produto == 3) {
        valorTotal = quantidade * 5.0;
    } else if (produto == 4) {
        valorTotal = quantidade * 2.0;
    } else if (produto == 5) {
        valorTotal = quantidade * 1.50;
    } else {
        printf("Código inválido\n");
        return 1;
    }

    printf("Total: R$ %.2f\n", valorTotal);

    return 0;
}