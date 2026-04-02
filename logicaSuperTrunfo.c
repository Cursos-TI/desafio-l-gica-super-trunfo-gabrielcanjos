#include <stdio.h>

int main() {

    // Carta 1
    char nome1[50] = "São Paulo";
    char estado1[3] = "SP";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;

    // Carta 2
    char nome2[50] = "Rio de Janeiro";
    char estado2[3] = "RJ";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Comparação (POPULAÇÃO)
    printf("Comparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome1);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome2);
    }

    return 0;
}
