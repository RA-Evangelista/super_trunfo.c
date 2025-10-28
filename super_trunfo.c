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

    printf("Comparação de cartas (Atributo: População):\n");
    
    if (populacao1 > populacao2) {
        printf("Carta 1 %s (%s): %d\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 %s (%s): %d\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("Carta 1 %s (%s): %d\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 %s (%s): %d\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } 
    else {
        printf("Carta 1 %s (%s): %d\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 %s (%s): %d\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Empate!\n");
    }

    return 0; 
}
