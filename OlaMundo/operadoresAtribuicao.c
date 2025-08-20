#include <stdio.h>

int main() {
    /*
    Atribuição simples (=)
    Atribuição com  soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
    */
   int numero1, numero2, resultado;
   numero1 = 10;
   numero2 = 5;
   resultado = 10;
   printf("Resultado: %d\n", resultado);

   resultado += 20; // Adiciona 20 ao resultado resultado = resultado + 20
   printf("Resultado: %d\n", resultado);

   resultado -= numero1; // Subtrai numero1 do resultado resultado = resultado - numero1
   printf("Resultado: %d\n", resultado);

   resultado *= 5; // Multiplica o resultado por 5 resultado = resultado * 5
   printf("Resultado: %d\n", resultado);
   
   resultado /= 2; // Divide o resultado por 2 resultado = resultado / 2
   printf("Resultado: %d\n", resultado);
}