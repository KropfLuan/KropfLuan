#include <stdio.h>

int main() {
    /*
    Incremento (++)
    pré-incremento (++variavel)
    pós-incremento (variavel++)
    Decremento (--)
    pré-decremento (--variavel)
    pós-decremento (variavel--)
    */

    int numero1 = 1, resultado;

    printf("Antes do incremento: %d\n", numero1);
    resultado = numero1++;
    
    printf("Depois Pós-incremento - número 1: %d - resultado: %d \n", numero1, resultado);
    
    resultado = ++numero1;
    printf("Depois do Pré-incremento numero 1: %d - resultado: %d \n", numero1, resultado);

    resultado = numero1--;
    printf("Depois do Pós-decremento numero 1: %d - resultado: %d \n", numero1, resultado);

    resultado = --numero1;
    printf("Depois do Pré-decremento numero 1: %d - resultado: %d \n", numero1, resultado);
}