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
    
    int escolha1, escolha2;
    float soma1 = 0;
    float soma2 = 0;
    
    char nome_attr1[50], nome_attr2[50];
    float val1_attr1, val1_attr2, val2_attr1, val2_attr2;

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

    printf("--- Batalha Super Trunfo (Mestre) ---\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    if (escolha1 != 1) { printf("1. População\n"); }
    if (escolha1 != 2) { printf("2. Área\n"); }
    if (escolha1 != 3) { printf("3. PIB\n"); }
    if (escolha1 != 4) { printf("4. Pontos Turísticos\n"); }
    if (escolha1 != 5) { printf("5. Densidade Populacional\n"); }
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2 || escolha2 < 1 || escolha2 > 5) {
        printf("Erro: Você deve escolher um atributo diferente e válido.\n");
        return 1; 
    }

    switch (escolha1) {
        case 1:
            strcpy(nome_attr1, "População");
            val1_attr1 = (float)populacao1;
            val2_attr1 = (float)populacao2;
            soma1 += val1_attr1;
            soma2 += val2_attr1;
            break;
        case 2:
            strcpy(nome_attr1, "Área");
            val1_attr1 = area1;
            val2_attr1 = area2;
            soma1 += val1_attr1;
            soma2 += val2_attr1;
            break;
        case 3:
            strcpy(nome_attr1, "PIB");
            val1_attr1 = pib1;
            val2_attr1 = pib2;
            soma1 += val1_attr1;
            soma2 += val2_attr1;
            break;
        case 4:
            strcpy(nome_attr1, "Pontos Turísticos");
            val1_attr1 = (float)pontosTuristicos1;
            val2_attr1 = (float)pontosTuristicos2;
            soma1 += val1_attr1;
            soma2 += val2_attr1;
            break;
        case 5:
            strcpy(nome_attr1, "Densidade Pop.");
            val1_attr1 = densidade1;
            val2_attr1 = densidade2;
            soma1 += (1.0 / densidade1); 
            soma2 += (1.0 / densidade2); 
            break;
    }
    
    switch (escolha2) {
        case 1:
            strcpy(nome_attr2, "População");
            val1_attr2 = (float)populacao1;
            val2_attr2 = (float)populacao2;
            soma1 += val1_attr2;
            soma2 += val2_attr2;
            break;
        case 2:
            strcpy(nome_attr2, "Área");
            val1_attr2 = area1;
            val2_attr2 = area2;
            soma1 += val1_attr2;
            soma2 += val2_attr2;
            break;
        case 3:
            strcpy(nome_attr2, "PIB");
            val1_attr2 = pib1;
            val2_attr2 = pib2;
            soma1 += val1_attr2;
            soma2 += val2_attr2;
            break;
        case 4:
            strcpy(nome_attr2, "Pontos Turísticos");
            val1_attr2 = (float)pontosTuristicos1;
            val2_attr2 = (float)pontosTuristicos2;
            soma1 += val1_attr2;
            soma2 += val2_attr2;
            break;
        case 5:
            strcpy(nome_attr2, "Densidade Pop.");
            val1_attr2 = densidade1;
            val2_attr2 = densidade2;
            soma1 += (1.0 / densidade1); 
            soma2 += (1.0 / densidade2); 
            break;
    }

    printf("\n--- Comparação de Cartas ---\n");
    printf("Carta 1: %s (%s)\n", nomeCidade1, estado1);
    printf("Carta 2: %s (%s)\n", nomeCidade2, estado2);
    
    printf("\n--- Valores ---\n");
    printf("Carta 1: %s: %.2f | %s: %.2f\n", nome_attr1, val1_attr1, nome_attr2, val1_attr2);
    printf("Carta 2: %s: %.2f | %s: %.2f\n", nome_attr1, val2_attr1, nome_attr2, val2_attr2);

    printf("\n--- Soma (Pontuação Final) ---\n");
    printf("Soma Carta 1: %.2f\n", soma1);
    printf("Soma Carta 2: %.2f\n", soma2);

    printf("\n--- Resultado Final ---\n");
    
    if (soma1 != soma2) {
        printf("Resultado: Carta (%s) venceu!\n", (soma1 > soma2) ? nomeCidade1 : nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0; 
}
