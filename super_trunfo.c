#include <stdio.h>
#include <string.h> 

int main() {
    char estado1[50];
    char codigo1[5]; 
    char nomeCidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    char estado2[50];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    
    int escolha;

    strcpy(estado1, "SP");
    strcpy(codigo1, "A01");
    strcpy(nomeCidade1, "São Paulo");
    populacao1 = 12300000; 
    area1 = 1521.11;
    pib1 = 699.28;
    pontosTuristicos1 = 50;

    strcpy(estado2, "RJ");
    strcpy(codigo2, "B02");
    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 6000000; 
    area2 = 1200.25;
    pib2 = 300.50;
    pontosTuristicos2 = 30;

    densidade1 = (float)populacao1 / area1; 
    pibPerCapita1 = pib1 / (float)populacao1;
    
    densidade2 = (float)populacao2 / area2; 
    pibPerCapita2 = pib2 / (float)populacao2;

    printf("--- Batalha Super Trunfo ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua escolha (1-5): ");
    
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1: 
            printf("\n--- Comparação (Atributo: População) ---\n");
            printf("Carta 1 %s (%s): %d\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 %s (%s): %d\n", nomeCidade2, estado2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break; 

        case 2: 
            printf("\n--- Comparação (Atributo: Área) ---\n");
            printf("Carta 1 %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break; 

        case 3: 
            printf("\n--- Comparação (Atributo: PIB) ---\n");
            printf("Carta 1 %s (%s): %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 %s (%s): %.2f bilhões\n", nomeCidade2, estado2, pib2);
            
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: 
            printf("\n--- Comparação (Atributo: Pontos Turísticos) ---\n");
            printf("Carta 1 %s (%s): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 %s (%s): %d\n", nomeCidade2, estado2, pontosTuristicos2);
            
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: 
            printf("\n--- Comparação (Atributo: Densidade Populacional) ---\n");
            printf("Carta 1 %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
            printf("Carta 2 %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
            
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default: 
            printf("\nOpção inválida! Por favor, execute novamente e escolha um número de 1 a 5.\n");
            break;
    }

    return 0; 
}
