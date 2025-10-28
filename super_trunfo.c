#include <stdio.h>

int main() {
    char estado1;
    char codigo1[5]; 
    char nomeCidade1[50]; 
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;
    
    int compPopulacao;
    int compArea;
    int compPIB;
    int compPontos;
    int compDensidade;
    int compPIBPerCapita;
    int compSuperPoder;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); 
    printf("Digite o Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 
    printf("Digite a População: ");
    scanf("%lu", &populacao1); 
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1; 
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2; 
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    printf("\n--- Carta 1: Dados Cadastrados ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); 
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2: Dados Cadastrados ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); 
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    compPopulacao = populacao1 > populacao2;
    compArea = area1 > area2;
    compPIB = pib1 > pib2;
    compPontos = pontosTuristicos1 > pontosTuristicos2;
    compPIBPerCapita = pibPerCapita1 > pibPerCapita2;
    compSuperPoder = superPoder1 > superPoder2;
    
    compDensidade = densidade1 < densidade2; 

    printf("\n--- Comparação de Cartas: ---\n");
    printf("População: Carta 1 venceu (%d)\n", compPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", compArea);
    printf("PIB: Carta 1 venceu (%d)\n", compPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", compPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", compDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compPIBPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", compSuperPoder);

    return 0; 
}
