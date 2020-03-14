// Exercício 05 - Dado um número inteiro positivo n verificar se é par ou ímpar. Apresente uma 
// mensagem na tela informando o número e o resultado.

#include <stdio.h>

int main(void) 
{
    int fat(int num);

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Fatorial de %d: %d \n", num, fat(num));

    return 0;
}

int fat(int num)
{
    if (num == 0)
    { 
        return 1;
    }
    else 
    {
        return num * fat(num - 1);
    }
}