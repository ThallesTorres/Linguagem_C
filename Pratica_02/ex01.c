// Exercício 01 - Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é primo, 0 em 
// caso contrário.

# include <stdio.h>

int main(void)
{
    int num, count;
    int qtd_num_primo = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Números divisores de %d: ", num);

    for (count = 1; count <= num; count ++)
    {
        if (num % count == 0)
        {
            qtd_num_primo += 1;
            printf("%d ", count);
        }
    }

    if (qtd_num_primo == 2)
    {
        printf("\nPor isso o número %d É PRIMO.", num);
    }

    else 
    {
        printf("\nPor isso o número %d NÃO É PRIMO.", num);
    }

    printf("\n");

    return 0;
}
