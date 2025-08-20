#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro
 
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
 
    float x = 5.5;
    float y = 2.2;
    float soma2 = x + y;
    float diferenca2 = x - y;
    float produto2 = x * y;
    float quociente2 = x / y; // Divisão de ponto flutuante
 
    printf("Soma: %.2f\n", soma2);
    printf("Diferença: %.2f\n", diferenca2);
    printf("Produto: %.2f\n", produto2);
    printf("Quociente: %.2f\n", quociente2);

    int a2 = 10;
    float b2 = 3.5;
    float resultado = a2 + b2; // 'a' é convertido implicitamente para float
 
    printf("Resultado: %.2f\n", resultado);

    int a3 = 10;
    int b3= 3;
    float quociente3 = (float) a3 / b3; // 'a' é explicitamente (casting) convertido para float
 
    printf("Quociente: %.2f\n", quociente3);
 
    return 0;
}    