#include <stdio.h>

int main() {

    int opcao;

    // Dados fixos
    char nome1[] = "São Paulo";
    char nome2[] = "Rio de Janeiro";

    int populacao1 = 12300000, populacao2 = 6000000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontos1 = 50, pontos2 = 30;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // MENU
    printf("Escolha o atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade\n");
    scanf("%d", &opcao);

    printf("\nResultado:\n");

    switch(opcao) {

        case 1:
            printf("População\n");
            if (populacao1 > populacao2)
                printf("Carta 1 venceu!\n");
            else if (populacao1 < populacao2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade\n");
            if (densidade1 < densidade2)
                printf("Carta 1 venceu!\n");
            else if (densidade1 > densidade2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
