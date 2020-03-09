// Exercício 12 - Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

#include <stdio.h>

int main(void)
{
    int num, count, impar;
    num = 0;
    impar = 1;
    count = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("Os %d primeiros números ímpares são: ", num);

    while (count < num)
    {
        printf("%d ", impar);
        count += 1;
        impar += 2;
    }

    printf("\n");
}