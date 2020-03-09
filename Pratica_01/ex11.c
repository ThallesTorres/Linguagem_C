// Exercício 11 - Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.

#include <stdio.h>

int main(void) 
{
    int num, count, resp;
    resp = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("A soma dos primeiros números naturais até %d é: ", num);

    for(count = 1; count <= num; count ++)
    {
        resp += count;
    }

    printf("%d \n", resp);

}