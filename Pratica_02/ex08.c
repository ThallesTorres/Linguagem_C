// Exercício 07 - Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é 
// par e 0 se n é impar.

# include <stdio.h>

int main(void)
{
    int impar_par(num);
    
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O número é %s.\n", (impar_par == 0) ? "PAR" : "ÍMPAR");

    return 0;
}

int impar_par(int num)
{
    if (num % 2 == 0)
    {
        return 0;
    }
    return 1;
}