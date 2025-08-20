#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[50];
    int matricula;
    printf("Cadastro de Aluno\n");
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura(0.00): \n");
    scanf("%f", &altura);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n", idade, altura);
    return 0;
}