#include <stdio.h>

int main() {
    /*
    soma(+)
    subtração(-)
    multiplicação(*)
    divisão(/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    //operacoes matematicas
    
    soma = numero1 + numero2;
    //soma
    
    subtracao = numero1 - numero2;
    //subtração

    multiplicacao = numero1 * numero2;
    //multiplicação

    divisao = numero1 / numero2;
    //divisão

    printf("A soma é: %d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);
} 