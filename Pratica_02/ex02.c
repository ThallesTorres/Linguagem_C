// Exercício 02 - Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros 
// números primos.

# include <stdio.h>

int main(void)
{
    int num, count_primo;
    count_primo = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (int count2 = 2; count_primo <= num; count2)
    {
        for (int count = 2; count_primo <= num; count ++)
        {
            if (count2 % count == 0)
            {
                count_primo ++;
                printf("%d", )
            }
        }
    }

    int num, qtd_num_primo;
    qtd_num_primo = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    //printf("Números divisiveis por %d: ", num);

    for (int count = 1; qtd_num_primo <= num; count ++)
    {
        if (num % count == 0)
        {
            qtd_num_primo += 1;
            printf("%d ", count);
        }
    }

    //printf("\nSoma dos primeiros números primos até %d: \n", num);
}