#include <stdio.h>

int main() {
    printf("Seja bem vindo ao Super Trunfo!\n");
    printf("Este é um jogo de cartas onde o objetivo é vencer o adversário com a melhor carta.\n");
    printf("Cada carta possui atributos como População, PIB, Área e Número de pontos turísticos.\n");
    printf("Insira os dados da sua carta:\n");

    char Estado1[50];
    char CódigoCarta1[10];
    char NomeCidade1[50];
    int populacao1;
    float Área1;
    float PIB1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float PIBperCapita1;

    char Estado2[50];
    char CódigoCarta2[10];
    char NomeCidade2[50];
    int populacao2;
    float Área2;
    float PIB2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float PIBperCapita2;

    printf("Vamos registrar a sua primeira carta!\n");
    // Solicita os dados da primeira carta do usuário
    printf("Estado: ");
    scanf(" %s", &Estado1);
    
    printf("Código da Carta(Ex: A01, B03): ");
    scanf(" %s", &CódigoCarta1);
    
    printf("Nome da Cidade: ");
    scanf(" %s", NomeCidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área(em km²): ");
    scanf("%f", &Área1);
    
    printf("PIB: ");
    scanf("%f", &PIB1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calcula a densidade populacional e o PIB per capita
    densidadePopulacional1 = populacao1 / Área1;
    PIBperCapita1 = (float) PIB1 / populacao1;
    
    
    printf("Sua carta foi registrada com sucesso!\n");
// Solicita os dados da segunda carta do usuário
    printf("Agora vamos registrar a segunda carta\n");
    printf("Estado: ");
    scanf(" %s", &Estado2);

    printf("Código da Carta(Ex: A01, B03): ");
    scanf(" %s", &CódigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %s", NomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &Área2);
    
    printf("PIB: ");
    scanf("%f", &PIB2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula a densidade populacional e o PIB per capita
    densidadePopulacional2 = populacao2 / Área2;
    PIBperCapita2 = (float) PIB2 / populacao2;
    
    printf("Sua carta foi registrada com sucesso!\n");
// Exibe os detalhes das cartas registradas
    printf("Aqui estão os detalhes das cartas registradas:\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", CódigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", Área1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", PIBperCapita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", CódigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBperCapita2);

    printf("Obrigado por jogar Super Trunfo!\n");
    return 0;
}