#include <stdio.h>

int main() {

    int op1, op2;

    char nome1[] = "São Paulo";
    char nome2[] = "Rio de Janeiro";

    int populacao1 = 12300000, populacao2 = 6000000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;

    // MENU 1
    printf("Escolha o primeiro atributo:\n1-População\n2-Área\n3-PIB\n4-Densidade\n");
    scanf("%d", &op1);

    // MENU 2
    printf("Escolha o segundo atributo:\n1-População\n2-Área\n3-PIB\n4-Densidade\n");
    scanf("%d", &op2);

    // Atributo 1
    switch(op1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    }

    // Atributo 2
    switch(op2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    }

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nResultado Final:\n");

    if (soma1 > soma2)
        printf("Carta 1 venceu!\n");
    else if (soma2 > soma1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    return 0;
}