#include <stdio.h>
#include <string.h>

int main() {

    // ===== CARTA 1 =====

    char estado1[30];
    char codigo1[10];
    char cidade1[50];

    int populacao1;
    int pontosTuristicos1;

    double area1;
    double pib1;

    // ===== CARTA 2 =====

    char estado2[30];
    char codigo2[10];
    char cidade2[50];

    int populacao2;
    int pontosTuristicos2;

    double area2;
    double pib2;

    // =========================
    // ENTRADA DE DADOS
    // =========================

    printf("=== SUPER TRUNFO ===\n\n");

    // ===== CARTA 1 =====

    printf("===== CARTA 1 =====\n");

    printf("Digite o estado: ");
    fgets(estado1, 30, stdin);

    printf("Digite o codigo da carta: ");
    fgets(codigo1, 10, stdin);

    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km²: ");
    scanf("%lf", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // limpa o ENTER do teclado

    // ===== CARTA 2 =====

    printf("\n===== CARTA 2 =====\n");

    printf("Digite o estado: ");
    fgets(estado2, 30, stdin);

    printf("Digite o codigo da carta: ");
    fgets(codigo2, 10, stdin);

    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²: ");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // REMOVER \n DO fgets
    // =========================

    estado1[strcspn(estado1, "\n")] = '\0';
    codigo1[strcspn(codigo1, "\n")] = '\0';
    cidade1[strcspn(cidade1, "\n")] = '\0';

    estado2[strcspn(estado2, "\n")] = '\0';
    codigo2[strcspn(codigo2, "\n")] = '\0';
    cidade2[strcspn(cidade2, "\n")] = '\0';

    // =========================
    // SAÍDA DE DADOS
    // =========================

    printf("\n===== DADOS DA CARTA 1 =====\n");

    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf km²\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===== DADOS DA CARTA 2 =====\n");

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}