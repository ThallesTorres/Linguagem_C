// Exercício 03 - Faça uma função que receba, por parâmetro, um valor inteiro e positivo e retorna o 
// número de divisores desse valor.

# include <stdio.h>

int main(void)
{
    int num;
    
    int primo(int num);

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("\nTotal de divisores: %d", primo(num));

    printf("\n");

    return 0;
}

int primo(int num)
{
    int qtd_num_primo = 0;

    printf("Números divisores de %d: ", num);

    for (int count = 1; count <= num; count ++)
    {
        (num % count == 0) 
        ? 
        qtd_num_primo ++,
        printf("%d ", count) 
        : 
        printf("");
    }

    return qtd_num_primo;
/*
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
    }*/
}