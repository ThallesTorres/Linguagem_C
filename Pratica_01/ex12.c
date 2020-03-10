// Exercício 12 - Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

#include <stdio.h>

int main(void)
{
    int num, impar;
    impar = 1;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("Os %d primeiros números ímpares são: ", num);

    for (int count = 0; count < num; count ++)
    {
        printf("%d ", impar);
        impar += 2;
    }

    printf("\n");
}