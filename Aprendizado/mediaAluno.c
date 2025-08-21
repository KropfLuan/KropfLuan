#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Bem vindo, aluno!\n");
    printf("Calcule a sua média!:\n");
    
    printf("Nota 1: ");
    scanf("%f", &nota1);
    
    printf("Nota 2: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    printf("Sua média é: %.1f\n", media);

    return 0;
}