#include <stdio.h>

int main() {
    char desc1[4], desc2[4];
    int d1, d2;
    int h1, m1, s1, h2, m2, s2;

    scanf("%s %d", desc1, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);

    scanf("%s %d", desc2, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int seg_inicial = d1 * 24 * 60 * 60 + h1 * 60 * 60 + m1 * 60 + s1;
    int seg_final = d2 * 24 * 60 * 60 + h2 * 60 * 60 + m2 * 60 + s2;
    int diferenca = seg_final - seg_inicial;

    int dias = diferenca / (24 * 60 * 60);
    int horas = (diferenca % (24 * 60 * 60)) / (60 * 60);
    int minutos = (diferenca % (60 * 60)) / 60;
    int segundos = diferenca % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segundos);

    return 0;
}