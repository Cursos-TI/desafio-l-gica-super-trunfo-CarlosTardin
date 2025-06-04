#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[4];
    char estado1[30];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontostur1;

    // Carta 2
    char codigo2[4];
    char estado2[30];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;

    // Entradas carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código (3 letras): ");
    scanf("%3s", codigo1);
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontostur1);

    // Entradas carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código (3 letras): ");
    scanf("%3s", codigo2);
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontostur2);

    // Exibição carta 1
    printf("\n- Dados da Carta 1 -\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontostur1);

    // Exibição carta 2
    printf("\n- Dados da Carta 2 -\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontostur2);

    return 0;
}
