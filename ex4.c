#include <stdio.h>

int main() {
    int golsInter, golsGremio, novoGrenal, grenais = 0, vitoriasInter = 0, vitoriasGremio = 0, empates = 0;

    while (1) {
        scanf("%d%d", &golsInter, &golsGremio);
        grenais++;
        
        if (golsInter > golsGremio) {
            vitoriasInter++;
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
        } else {
            empates++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novoGrenal);

        if (novoGrenal == 2) {
            break;
        }
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitoriasInter);
    printf("Gremio:%d\n", vitoriasGremio);
    printf("Empates:%d\n", empates);

    if (vitoriasInter > vitoriasGremio) {
        printf("Inter venceu mais\n");
    } else if (vitoriasGremio > vitoriasInter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}