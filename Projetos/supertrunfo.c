#include <stdio.h>

int main() {
    printf("Seja bem vindo ao Super Trunfo!\n");
    printf("Este é um jogo de cartas onde o objetivo é vencer o adversário com a melhor carta.\n");
    printf("Cada carta possui atributos como População, PIB, Área e Número de pontos turísticos.\n");
    

    char Estado1[50] = "A";
    char CódigoCarta1[10] = "A01";
    char NomeCidade1[50] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float Área1 = 1521.11;
    float PIB1 = 699280000000;
    int pontosTuristicos1 = 50;
    float densidadePopulacional1; 
    float PIBperCapita1;
    float SuperPoder1;

    char Estado2[50] = "B";
    char CódigoCarta2[10] = "B02";
    char NomeCidade2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float Área2 = 1200.25;
    float PIB2 = 300500000000;
    int pontosTuristicos2 = 30;
    float densidadePopulacional2;
    float PIBperCapita2;
    float SuperPoder2;

    // Calcula a densidade populacional, PIB per capita e o Super Poder da primeira carta
    densidadePopulacional1 = (float) (populacao1 / Área1);
    PIBperCapita1 = (float) PIB1 / populacao1;
    SuperPoder1 = (float) populacao1 + Área1 + PIB1 + pontosTuristicos1;
    
    // Calcula a densidade populacional, PIB per capita e o Super Poder da segunda carta
    densidadePopulacional2 = (float) populacao2 / Área2;
    PIBperCapita2 = (float) PIB2 / populacao2;
    SuperPoder2 = (float) populacao2 + Área2 + PIB2 + pontosTuristicos2;

    // Compara os Super Poderes das cartas
    if (populacao1 > populacao2) {
        printf("Carta 1 - São Paulo (SP): %u\n", populacao1);
        printf("Carta 2 - Rio de Janeiro (RJ): %u\n", populacao2);
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }
    return 0;
}