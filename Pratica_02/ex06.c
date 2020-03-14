// Exercício 06 - Escreva uma função recursiva que receba, por parâmetro, dois valores X e Z e calcula 
// e retorna XZ. 

#include <stdio.h>

int main(void) 
{
    int n1, n2;

    printf("Base = ");
    scanf("%d", &n1);

    printf("Expoente = ");
    scanf("%d", &n2);

    printf("Resultado = %d \n", potenciacao(n1, n2));
}

int potenciacao(int n1, int n2)
{
    if (n2 == 0)
    {
        return 1;
    }
    else
    {
        return n1 * potenciacao(n1, n2 - 1);
    }
}