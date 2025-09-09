#include <stdio.h>

int main() {
    printf("Seja bem vindo ao Super Trunfo!\n");
    printf("Este é um jogo de cartas onde o objetivo é vencer o adversário com a melhor carta.\n");
    printf("Cada carta possui atributos como População, PIB, Área e Número de pontos turísticos.\n");
    
    int opcaoMenu, opcaoMenu2;

    char Estado1[50] = "A";
    char CódigoCarta1[10] = "A01";
    char NomeCidade1[50] = "São_Paulo";
    unsigned long int populacao1 = 12325000;
    float Área1 = 1521.11;
    float PIB1 = 699280000000;
    int pontosTuristicos1 = 50;
    float densidadePopulacional1; 
    float PIBperCapita1;
    float SuperPoder1;

    char Estado2[50] = "B";
    char CódigoCarta2[10] = "B02";
    char NomeCidade2[50] = "Rio_de_Janeiro";
    unsigned long int populacao2 = 6748000;
    float Área2 = 1200.25;
    float PIB2 = 300500000000;
    int pontosTuristicos2 = 30;
    float densidadePopulacional2;
    float PIBperCapita2;
    float SuperPoder2;
    /*
    Infomarções das cartas para serem adicionadas
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699280000000 bilhões de reais
    Número de Pontos Turísticos: 50
 
    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300500000000 bilhões de reais
    Número de Pontos Turísticos: 30 
    */

    // Calcula a densidade populacional, PIB per capita e o Super Poder da primeira carta
    densidadePopulacional1 = (float) (populacao1 / Área1);
    PIBperCapita1 = (float) PIB1 / populacao1;
    SuperPoder1 = (float) populacao1 + Área1 + PIB1 + pontosTuristicos1;
    
    // Calcula a densidade populacional, PIB per capita e o Super Poder da segunda carta
    densidadePopulacional2 = (float) populacao2 / Área2;
    PIBperCapita2 = (float) PIB2 / populacao2;
    SuperPoder2 = (float) populacao2 + Área2 + PIB2 + pontosTuristicos2;
    // Menu do jogo 
    printf("Menu do jogo:\n");
    printf("Escolha uma opção:\n");
    printf("1.Exibir atributos das cartas\n");
    printf("2. Comparar cartas\n");
    printf("3. Sair\n");
    scanf("%d", &opcaoMenu);


    switch (opcaoMenu) {
        case 1:
// Exibe os detalhes das cartas registradas
            printf("Aqui estão os detalhes das cartas registradas:\n");
            printf("\nCarta 1:\n");
            printf("População: %u\n", populacao1);
            printf("Área: %.2f km²\n", Área1);
            printf("PIB: %.2f bilhões de reais\n", PIB1);
            printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
            printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional1);
            printf("PIB per capita: %f reais\n", PIBperCapita1);
            printf("Super Poder: %f\n", SuperPoder1);

            printf("\nCarta 2:\n");
            printf("População: %u\n", populacao2);
            printf("Área: %.2f km²\n", Área2);
            printf("PIB: %.2f bilhões de reais\n", PIB2);
            printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
            printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional2);
            printf("PIB per capita: %f reais\n", PIBperCapita2);
            printf("Super Poder: %f\n", SuperPoder2);
            break;
        case 2: // Comparar cartas
            printf("\nComparar cartas selecionado.\n");
            printf("Escolha o atributo para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade populacional\n");
            scanf("%d", &opcaoMenu2);
            // Usando switch para escolher o atributo a ser comparado
        switch (opcaoMenu2) {
            case 1:
            if (populacao1 > populacao2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("População selecionado.\n");
                printf("%u VS %u\n", populacao1, populacao2);
                printf("Carta 1 (São Paulo) venceu com maior população!\n");
            } else if (populacao1 < populacao2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("População selecionado.\n");
                printf("%u VS %u\n", populacao1, populacao2);
                printf("Carta 2 (Rio de Janeiro) venceu com maior população!\n");
            } else {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("População selecionado.\n");
                printf("%u VS %u\n", populacao1, populacao2);
                printf("Empate na população!\n");
            }
                break;
            case 2:
            if (Área1 > Área2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("Área selecionado.\n");
                printf("%.2f VS %.2f\n", Área1, Área2);
                printf("Carta 1 (São Paulo) venceu com maior área!\n");
            } else if (Área1 < Área2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("Área selecionado.\n");
                printf("%.2f VS %.2f\n", Área1, Área2);
                printf("Carta 2 (Rio de Janeiro) venceu com maior área!\n");
            } else {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("Área selecionado.\n");
                printf("%.2f VS %.2f\n", Área1, Área2);
                printf("Empate na área!\n");
            }
                break;
            case 3:
            if (PIB1 > PIB2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("PIB selecionado.\n");
                printf("%.2f VS %.2f\n", PIB1, PIB2);
                printf("Carta 1 (São Paulo) venceu com maior PIB!\n");
            } else if (PIB1 < PIB2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("PIB selecionado.\n");
                printf("%.2f VS %.2f\n", PIB1, PIB2);
                printf("Carta 2 (Rio de Janeiro) venceu com maior PIB!\n");
            } else {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("PIB selecionado.\n");
                printf("%.2f VS %.2f\n", PIB1, PIB2);
                printf("Empate no PIB!\n");
            }
                break;
            case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("Pontos turísticos selecionado.\n");
                printf("%d VS %d\n", pontosTuristicos1, pontosTuristicos2);
                printf("Carta 1 (São Paulo) venceu com mais pontos turísticos!\n");
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("Pontos turísticos selecionado.\n");
                printf("%d VS %d\n", pontosTuristicos1, pontosTuristicos2);
                printf("Carta 2 (Rio de Janeiro) venceu com mais pontos turísticos!\n");
            } else {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("Pontos turísticos selecionado.\n");
                printf("%d VS %d\n", pontosTuristicos1, pontosTuristicos2);
                printf("Empate no número de pontos turísticos!\n");
            }
                break;
            case 5:
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("Atributo Densidade Populacional selecionado.\n");
                printf("%f VS %f\n", densidadePopulacional1, densidadePopulacional2);
                printf("Carta 1 (São Paulo) venceu com menor densidade populacional!\n");
            } else if (densidadePopulacional1 > densidadePopulacional2) {
                printf ("São paulo VS Rio de Janeiro\n");
                printf("Atributo Densidade Populacional selecionado.\n");
                printf("%f VS %f\n", densidadePopulacional1, densidadePopulacional2);
                printf("Carta 2 (Rio de Janeiro) venceu com menor densidade populacional!\n");
            } else {
                printf("São paulo VS Rio de Janeiro\n");
                printf("Atributo Densidade Populacional selecionado.\n");
                printf("%.2f VS %.2f\n", densidadePopulacional1, densidadePopulacional2);
                printf("Empate na densidade populacional!\n");
            }
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
                // Fim do switch de comparação
        }
            break;          
        case 3: // Sair do jogo
            printf("Sair selecionado. Encerrando o jogo.\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }
    return 0;
}