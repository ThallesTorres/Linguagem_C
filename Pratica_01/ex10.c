// Exercício 10 - Dada uma sequência de números inteiros não-nulos, começando por 1, imprimir 
// seus quadrados. 

#include <stdio.h>

int main(void) 
{
    int num, count;

    do
    {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        (num > 0) ? 
        
        printf("Quadrado de %d: %d\n", num, num * num) : 
        printf("Número digitado não é válido.\n");
    }
    while (num != 0);

  return 0;
}