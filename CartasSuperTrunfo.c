#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade_pop1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade_pop2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 * 1e9 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_pop1);

    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 * 1e9 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_pop2);

    // Menu Interativo
    int opcao;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparação de Atributos
    printf("\nComparação das Cartas:\n");
    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area1 < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib1 < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4: // Número de Pontos Turísticos
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_pop1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_pop2);
            if (densidade_pop1 < densidade_pop2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade_pop1 > densidade_pop2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}