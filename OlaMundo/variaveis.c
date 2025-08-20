#include <stdio.h>

int main() {

    int idade = 23;
    int quantidade = 1;
    // Variável que armazena dados "inteiros"
    float altura = 1.76;
    // variável que armazena dados "flutuantes", casas decimais (valores menores)
    double peso = 99.8;
    // variável que armazena dados "flutuantes" com maior precisão e trabalha com mais casas decimais
    char letra = 'L';
    // variável que armazena dados "caracteres" (letras, números, símbolos)
    // Exemplo: 'a', '1', '@'
    char nome[50] = "Luan";
    // variável que armazena uma sequência de caracteres (string), com tamanho máximo de 50 caracteres
    
    /*
    Elas podem ser inicializadas no meio do código,
    mas é recomendado inicializar no início do código
    E também podem ser renomeadas novamente a qualquer momento.
    */ 
    printf("Olá, meu é %s!\n", nome);
    printf("Eu tenho %d anos\n", idade);
    printf("Eu peso %.1f kg\n", peso);
    printf("Eu tenho %.2f metros de altura\n", altura);
    printf("A primeira letra do meu nome é %c\n", letra);
    printf("Só existe %d Luan no mundo\n", quantidade);
    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3); 
    o mesmo vale para 
    /n - pula linha
    Formatos:
    %d - inteiro
    %i - inteiro (equivalente a %d)
    %f - flutuante (padrão com 6 casas decimais)
    %.1f - Ponto flutuante com 1 casa decimal
    %.2f - Ponto flutuante com 2 casas decimais
    %e - notação científica
    %c - 1 único caractere
    %s - string (sequência de caracteres)
    */
    printf("Qual é o seu nome? ");
    scanf("%s", nome);
    printf("Olá, %s!\n", nome);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("Sua idade é %d anos\n", idade);
    
    printf("Qual a sua altura? ");
    scanf("%f", &altura);
    printf("Sua altura é %.2f metros\n", altura);
    
    printf("Quanto você pesa? ");
    scanf("%lf", &peso);
    printf("Você pesa %.1f kg\n", peso);

    printf("Qual a primeira letra do seu nome? ");
    scanf(" %c", &letra);
    // A leitura do caractere deve ser precedida por um espaço para ignorar o caractere de nova linha
    printf("A primeira letra do seu nome é %c\n", letra);
    return 0;
}