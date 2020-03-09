// Exercício 10 - Dada uma sequência de números inteiros não-nulos, começando por 1, imprimir 
// seus quadrados. 

#include <stdio.h>

int main(void) 
{
    int num, count, resp;

    do
    {
        printf("Entre com uma sequência de números inteiros não-nulos (iniciando por 1): ");
        scanf("%d", &num);

        if (num > 0)
        {
            resp = num * num;

            printf("Quadrado de %d: %d\n", num, resp);
        } 

        else 
        {
            printf("Número digitado não é válido.\n");
        }
    }
    while (num != 0);

  return 0;
}